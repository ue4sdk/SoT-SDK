#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationStateParams
// 0x0010
struct FKrakenShipWrappingTentacleAnimationStateParams
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               Visible;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	int                                                StartFrame;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndFrame;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationPhaseCollection
// 0x0080
struct FKrakenShipWrappingTentacleAnimationPhaseCollection
{
	struct FKrakenShipWrappingTentacleAnimationStateParams Unwrapping;                                               // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FKrakenShipWrappingTentacleAnimationStateParams Dormant;                                                  // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams Wrapping;                                                 // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams AmbientWobble;                                            // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams EnteringShakeAttack;                                      // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ShakeAttack;                                              // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams ExitingShakeAttack;                                       // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingTentacleAnimationStateParams HeavyAttack;                                              // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleVFXParams
// 0x0028
struct FKrakenShipWrappingTentacleVFXParams
{
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	class UParticleSystem*                             VFX;                                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleParams
// 0x00E8
struct FKrakenShipWrappingTentacleParams
{
	struct FKrakenShipWrappingTentacleVFXParams        WrappingIntoWaterSplashVFX;                               // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FKrakenShipWrappingTentacleAnimationPhaseCollection AnimationStates;                                          // 0x01E3(0x0080) (Edit, DisableEditOnInstance)
	float                                              TimeIntoWrappingToDisableInteractables;                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoUnwrappingToEnableInteractables;                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoWrappingToEnableCollisions;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntoUnwrappingToDisableCollisions;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighDetailAnimationStreamingDistance;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenShipWrappingTentacleVFXParams        WrappingOutOfWaterSplashVFX;                              // 0x01E3(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingTentacleAnimationState
// 0x0010
struct FKrakenShipWrappingTentacleAnimationState
{
	double                                             EndTime;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	uint32_t                                           EpochId;                                                  // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EKrakenShipWrappingTentacleState>      State;                                                    // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentaclesChanceParams
// 0x0028
struct FKrakenTentaclesChanceParams
{
	struct FWeightedProbabilityRange                   ProbabilityRange;                                         // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1C3];                                     // 0x0020(0x01C3) MISSED OFFSET
	int                                                NumberOfTentaclesSpawned;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentacleParams
// 0x0050
struct FKrakenTentacleParams
{
	float                                              ChanceOfInactiveToActiveTentacleOnDeathOrFlee;            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TentacleHealth;                                           // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FFloatRange                                 InactiveToActiveTentacleTimeout;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InactiveToActiveTentacleTimeoutThresholdInSeconds;        // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfInactiveToActiveTentacle;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	class UKrakenPlayerGrabbingBehaviourParamsDataAsset* PlayerGrabbingParams;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<EKrakenBehaviourType>                  Type;                                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           MaxInstancesOfBehaviourAllowed;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           TargetTimeout;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UKrakenIdleBehaviourParamsDataAsset*         IdleParams;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenShipWrappingBehaviourParamsCollection ShipWrappingParams;                                       // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenShipHittingBehaviourParamsCollection ShipHittingParams;                                        // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenParams
// 0x0158
struct FKrakenParams
{
	float                                              DamageAmountToTriggerAudioComponentNotification;          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      KrakenType;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MurkClass;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGeneratedLocationsDataAsset*                PotentialTentacleSpawnLocations;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRange                   NumberOfTentaclesToSpawn;                                 // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenTentaclesChanceParams>        TentaclesRequiredToDismissKraken;                         // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TickFrequencyToLookForNewBehaviours;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OperatingAreaRadius;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumOperatingAreaMovementDeltaToInvalidateLocations;   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusToleranceBeforeOperatingAreaDespawn;                // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKrakenTentaclesChanceParams>        NumTentacleInstancesToAssignToShip;                       // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              GlobalPlayRateScale;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 NewTargetTimeout;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 UnavailableTargetTimeout;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenTentacleParams                       TentacleParams;                                           // 0x01E3(0x0050) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWhenNoTargets;                              // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           DismissTimeoutWithNewTarget;                              // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenBehaviourParams>              Behaviours;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
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
	class UKrakenAnimatedTentacleAnimationDataAsset*   AnimationAsset;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UAnimSequence*                               ClientAnimation;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	TArray<class UAnimSequence*>                       TransitionAnimations;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      FromState;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BranchAnimationTimeRemaining;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenAnimatedTentacleStateAnimationMapping
// 0x0028
struct FKrakenAnimatedTentacleStateAnimationMapping
{
	TArray<struct FKrakenAnimatedTentacleTransitionAnimation> Transitions;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      State;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Animation;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourActionChances
// 0x0008
struct FKrakenTentacleBehaviourActionChances
{
	float                                              WeightedChance;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EKrakenTentacleBehaviourDamageActions> ActionToTransitionTo;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenTentacleBehaviourParams
// 0x00B8
struct FKrakenTentacleBehaviourParams
{
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInActiveState;                                 // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UEnvQuery*                                   InactiveSpawnQueryTemplate;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfCannonSideSpawn;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   ActiveCannonSideSpawnQueryTemplate;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   ActiveNonCannonSideSpawnQueryTemplate;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TentacleClass;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPlayRateScale;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPlayRateScale;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnShipRangeRadius;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnTentacleRadius;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PanicDespawnAnimationPlayRateScale;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreDeathAnimationPlayRateScale;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKrakenTentacleBehaviourActionChances> OnDamageActionChances;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeToSpendInInactiveState;                               // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenIdleBehaviourParams
// 0x0000 (0x00B8 - 0x00B8)
struct FKrakenIdleBehaviourParams : public FKrakenTentacleBehaviourParams
{

};

// ScriptStruct Kraken.KrakenPlayerGrabbingHoldingStateTransitionChance
// 0x0010
struct FKrakenPlayerGrabbingHoldingStateTransitionChance
{
	class UClass*                                      StateToTransitionTo;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              WeightedChance;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenPlayerGrabbingBehaviourParams
// 0x0018 (0x00D0 - 0x00B8)
struct FKrakenPlayerGrabbingBehaviourParams : public FKrakenTentacleBehaviourParams
{
	unsigned char                                      UnknownData00[0x12B];                                     // 0x00B8(0x012B) MISSED OFFSET
	float                                              MinUnsuccessfulTargetTimeout;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUnsuccessfulTargetTimeout;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKrakenPlayerGrabbingHoldingStateTransitionChance> HoldingTransitionChances;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenServiceSpawnParams
// 0x0080
struct FKrakenServiceSpawnParams
{
	class UEnvQuery*                                   SpawnLocationQuery;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	float                                              SpawnLocationDistributionRadius;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnLocationDistributionMinDistanceBetweenPoints;        // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDistanceInFrontOfShip;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsRange;                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenSpawnAttemptsPostSpawnFailure;                 // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	float                                              SpawnChance;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxConsecutiveFailedSpawnAttempts;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenServiceParams
// 0x0090
struct FKrakenServiceParams
{
	class UKrakenParamsDataAsset*                      KrakenParams;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	int                                                MaxNumberOfKrakenInstances;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FKrakenServiceSpawnParams                   SpawnParams;                                              // 0x01E3(0x0080) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourImpactParams
// 0x0090
struct FKrakenShipHittingBehaviourImpactParams
{
	struct FWeightedProbabilityRangeOfRanges           NumZonesToDamage;                                         // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FTransform                                  TentacleTransform;                                        // 0x01E3(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactForce;                                              // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DamageLocation;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipHittingBehaviourParams
// 0x0058
struct FKrakenShipHittingBehaviourParams
{
	TArray<struct FKrakenShipHittingBehaviourImpactParams> Configurations;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      ShipSize;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TentacleType;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToCancelImpact;                             // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	float                                              CancellationThreshold;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactTime;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourNamedTransform
// 0x0040
struct FKrakenShipWrappingBehaviourNamedTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWarningParams
// 0x00A0
struct FKrakenShipWrappingBehaviourWarningParams
{
	struct FTransform                                  TentacleLocation;                                         // 0x0000(0x0030) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UClass*                                      TentacleType;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickDuration;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FFloatRange                                 TentacleTimeoutRange;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           TentacleHealthRange;                                      // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> TentacleLocations;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TentacleTimeout;                                          // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TentacleHealth;                                           // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
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
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Far;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FKrakenShipWrappingBehaviourNamedTransform> Near;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenDynamicsStateEvent
// 0x000C
struct FKrakenDynamicsStateEvent
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TEnumAsByte<EKrakenDynamicsStateEvent>             Event;                                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenDynamicsStateFragmentParams
// 0x0020
struct FKrakenDynamicsStateFragmentParams
{
	TArray<struct FKrakenDynamicsStateEvent>           Events;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UCurveVector*                                TorqueCurve;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaselineTorque;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	struct FKrakenDynamicsStateParams                  HeavyAttack;                                              // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FKrakenDynamicsStateParams                  AmbientWobble;                                            // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  EnteringShakeAttack;                                      // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ShakeAttack;                                              // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
	struct FKrakenDynamicsStateParams                  ExitingShakeAttack;                                       // 0x01E3(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationParams
// 0x00E0
struct FKrakenShipWrappingBehaviourWrapLocationParams
{
	struct FKrakenDynamicsParams                       DynamicsParams;                                           // 0x0000(0x0050) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	class UClass*                                      TentacleType;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WrapLocationAnchorPoint;                                  // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  TentacleHeadHoldShipLocation;                             // 0x01E3(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations PortTentacleHeadLocations;                                // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadLocations StarboardTentacleHeadLocations;                           // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapLocationWeightedParams
// 0x00F0
struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams
{
	struct FKrakenShipWrappingBehaviourWrapLocationParams Params;                                                   // 0x0000(0x00E0) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x103];                                     // 0x00E0(0x0103) MISSED OFFSET
	float                                              Weight;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourWrapParams
// 0x0140
struct FKrakenShipWrappingBehaviourWrapParams
{
	struct FKrakenShipWrappingBehaviourWrapLocationParams WrapLocation;                                             // 0x0000(0x00E0) (Transient)
	unsigned char                                      UnknownData00[0x103];                                     // 0x00E0(0x0103) MISSED OFFSET
	struct FFloatRange                                 WrapTimeBeforeGivingUpRange;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipInternalWaterLevelToTriggerUnwrap;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenAnchorDynamicsParams                 AnchorDynamicsParams;                                     // 0x01E3(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FKrakenShipWrappingBehaviourWrapLocationWeightedParams> WrapLocations;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              WrapTimeBeforeGivingUp;                                   // 0x01E3(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourTentacleHeadParams
// 0x0048
struct FKrakenShipWrappingBehaviourTentacleHeadParams
{
	float                                              ChanceOfSelectingSelectingDifferentDistanceFromShipWhenRemaningOnSameSide;// 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      TentacleType;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DamageRequiredToRelocate;                                 // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	float                                              RelocationThreshold;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSwitchingSides;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfSelectingNearLocationAfterSwitchingSides;         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourShakeAttackParams
// 0x0068
struct FKrakenShipWrappingBehaviourShakeAttackParams
{
	float                                              ChanceOfShake;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenShakeAttackAttempts;                           // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                           // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	uint32_t                                           MaxFailedShakeAttackAttempts;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHeavyAttackParams
// 0x00A0
struct FKrakenShipWrappingBehaviourHeavyAttackParams
{
	struct FKnockBackInfo                              InteriorKnockbackParams;                                  // 0x0000(0x0034) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1AF];                                     // 0x0034(0x01AF) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           AttackDuration;                                           // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	float                                              ChanceOfEnteringHeavyAttack;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKnockBackInfo                              ExteriorKnockbackParams;                                  // 0x01E3(0x0034) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourDamageParams
// 0x0068
struct FKrakenShipWrappingBehaviourDamageParams
{
	struct FWeightedProbabilityRangeOfRanges           DamageIntervalRange;                                      // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	float                                              ChanceOfDamagingBottomDeckDamageHoles;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceThatExistingHolesWillBeDamaged;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           NumHolesToDamageRange;                                    // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourHealthParams
// 0x0038
struct FKrakenShipWrappingBehaviourHealthParams
{
	struct FWeightedProbabilityRangeOfRanges           HealthReductionRequiredToUnwrapTheShipRange;              // 0x0000(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Kraken.KrakenShipWrappingBehaviourParams
// 0x03E0
struct FKrakenShipWrappingBehaviourParams
{
	struct FKrakenShipWrappingBehaviourHealthParams    HealthParams;                                             // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class UClass*                                      ShipSize;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKrakenShipWrappingBehaviourWarningParams   WarningParams;                                            // 0x01E3(0x00A0) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourWrapParams      WrapParams;                                               // 0x01E3(0x0140) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourTentacleHeadParams TentacleHeadParams;                                       // 0x01E3(0x0048) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourShakeAttackParams ShakeAttackParams;                                        // 0x01E3(0x0068) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourHeavyAttackParams HeavyAttackParams;                                        // 0x01E3(0x00A0) (Edit, DisableEditOnInstance)
	struct FKrakenShipWrappingBehaviourDamageParams    DamageParams;                                             // 0x01E3(0x0068) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x195];                                     // 0x024B(0x0195) MISSED OFFSET
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
// 0x0008
struct FEventKrakenSpawned
{
	class AShip*                                       PrimaryShipTarget;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Kraken.EventKrakenShipWrappingTentacleStateChanged
// 0x0002
struct FEventKrakenShipWrappingTentacleStateChanged
{
	TEnumAsByte<EKrakenShipWrappingTentacleState>      NewState;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<EKrakenShipWrappingTentacleState>      PreviousState;                                            // 0x01E3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
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
	TEnumAsByte<EKrakenDespawnReason>                  KrakenDespawnReason;                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class FString                                      KrakenId;                                                 // 0x01E3(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Kraken.KrakenSpawnTelemetryEvent
// 0x0010
struct FKrakenSpawnTelemetryEvent
{
	class FString                                      KrakenId;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
