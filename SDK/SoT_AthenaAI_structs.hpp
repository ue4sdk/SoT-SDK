#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaAI_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Pets_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Animation_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_StatusEffects_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAI.AthenaAIFormComponentVfxCustomisation
// 0x0018
struct FAthenaAIFormComponentVfxCustomisation
{
	UClass*                                            VfxCustomisationType;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               VfxEnabled;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	UObject*                                           VfxTemplate;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnTypeParams
// 0x00E8
struct FAISpawnTypeParams
{
	TAssetPtr<class UClass>                            AIClass;                                                  // 0x0000(0x0020) (Edit)
	FStringAssetReference                              SkillsetOverride;                                         // 0x0020(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              LoadoutOverride;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              FormOverride;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              AmmoOverride;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            ItemDropComponentClassOverride;                           // 0x0060(0x0020) (Edit)
	UClass*                                            AIClassIdOverride;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FStringAssetReference                              TeamColorOverride;                                        // 0x0088(0x0010) (Edit, ZeroConstructor)
	FEncounterParams                                   EncounterTrackingParams;                                  // 0x0098(0x000C) (Edit)
	FName                                              DioramaRole;                                              // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	FText                                              LocalisableName;                                          // 0x00B0(0x0038) (Edit)
};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// 0x00F0
struct FWeightedAISpawnTypeParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTimesCanBeSelected;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FAISpawnTypeParams                                 Params;                                                   // 0x0008(0x00E8) (Edit)
};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// 0x0048
struct FAISpawnTypeParamsCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<FWeightedAISpawnTypeParams>                 SpawnParams;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIEncounterAndWaveSettingsOverride
// 0x0020
struct FAIEncounterAndWaveSettingsOverride
{
	UAIEncounterSettings*                              EncounterSettings;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UAISpawnWaveSequenceRankProgression*               SpawnWaveProgression;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Chance;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              FeatureToggle;                                            // 0x0014(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// 0x0038
struct FAISpawnContextIdEncounterSettingsPair
{
	TArray<UClass*>                                    SpawnContexts;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               DisableSpawning;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	UAIEncounterSettings*                              EncounterSettings;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAISpawnWaveSequenceRankProgression*               SpawnWaveProgression;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAIEncounterAndWaveSettingsOverride>        EncounterAndWaveSettingsOverride;                         // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISpawnOverride
// 0x0010
struct FAISpawnOverride
{
	FStringAssetReference                              FormOverride;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.ConditionalAISpawnOverride
// 0x0018
struct FConditionalAISpawnOverride
{
	UAISpawnOverrideCondition*                         Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FAISpawnOverride                                   Override;                                                 // 0x0008(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.AdditionalSpawnerBehaviour
// 0x0010
struct FAdditionalSpawnerBehaviour
{
	USpawnerBehaviourStrategy*                         BehaviourStrategy;                                        // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFormDamageResponse
// 0x0010
struct FAIFormDamageResponse
{
	UClass*                                            DamagerType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReaction;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsKnockbackDisabled;                                      // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsStunDisabled;                                           // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// 0x000C
struct FAthenaAIControllerParamValue
{
	FName                                              ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRange
// 0x0038
struct FAthenaAIAbilityPlayerBasedRange
{
	int                                                MaxPlayers;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	FWeightedProbabilityRangeOfRanges                  WeightedArray;                                            // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRanges
// 0x0010
struct FAthenaAIAbilityPlayerBasedRanges
{
	TArray<FAthenaAIAbilityPlayerBasedRange>           AbilityRanges;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.MinMaxAbilityRange
// 0x0008
struct FMinMaxAbilityRange
{
	float                                              MinDistanceToTarget;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceToTarget;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIAbilityFollowUp
// 0x0010
struct FAIAbilityFollowUp
{
	UClass*                                            AbilityType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIAbilityContinuousCooldownParameterData
// 0x0020
struct FAIAbilityContinuousCooldownParameterData
{
	FAthenaAIAbilityPlayerBasedRanges                  InitialCooldown;                                          // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	FAthenaAIAbilityPlayerBasedRanges                  CooldownBetweenActivations;                               // 0x0010(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// 0x0028
struct FAttackableTypeToAnimMapping
{
	TEnumAsByte<ESwimAttackableType>                   AttackType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	UObject*                                           AnimMontage;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              AnimLength;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeIntoAnimOfAttack;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetKnockBackStrength;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              RumbleTag;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.SwimAttackTargetShipImpulseData
// 0x0038
struct FSwimAttackTargetShipImpulseData
{
	UClass*                                            ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushImpulseForce;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            PushImpulseLocation;                                      // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushForceScalingFactorForeAndAftOfShipLowerBound;         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushForceScalingFactorForeAndAftOfShipUpperBound;         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollImpulseForce;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            RollImpulseLocation;                                      // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollForceScalingFactorForeAndAftOfShipLowerBound;         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollForceScalingFactorForeAndAftOfShipUpperBound;         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// 0x0018
struct FAIStrategyMovementProperties
{
	UClass*                                            AIStrategy;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedAmp;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAccelAmp;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideRVOAvoidanceRadius;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideBlendSpeed;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnerWave
// 0x0100
struct FAISpawnerWave
{
	float                                              SpawnChance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	FWeightedProbabilityRange                          NumOfSpawnsInWave;                                        // 0x0008(0x0020) (Edit)
	FAISpawnTypeParamsCollection                       SpawnTypeParamsOverride;                                  // 0x0028(0x0048) (Edit)
	FWeightedProbabilityRangeOfRanges                  DelayBeforeWave;                                          // 0x0070(0x0030) (Edit)
	FWeightedProbabilityRangeOfRanges                  DelayBetweenSpawns;                                       // 0x00A0(0x0030) (Edit)
	FWeightedProbabilityRangeOfRanges                  DelayBeforeNextWaveIfSuccessful;                          // 0x00D0(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AIPersistentSpawnerWave
// 0x0028 (0x0128 - 0x0100)
struct FAIPersistentSpawnerWave : public FAISpawnerWave
{
	bool                                               CacheHealthOnDespawn;                                     // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	UClass*                                            AITypeToCache;                                            // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0110(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// 0x0058 (0x0180 - 0x0128)
struct FAIBountySpawnerWave : public FAIPersistentSpawnerWave
{
	bool                                               IsTarget;                                                 // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingDialogue;                                          // 0x0129(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x012A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x012B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	UPostBountyAIPawnSpawnedAction*                    PostSpawnAction;                                          // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0138(0x0038) MISSED OFFSET
	UClass*                                            BountyReward;                                             // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UItemSpawnData>               BountyRewardSpawnData;                                    // 0x0178(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// 0x0030
struct FAIBountySpawnerWaveGroup
{
	TArray<FAIBountySpawnerWave>                       Waves;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup;                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	UClass*                                            CombatDialogueForWaveGroup;                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// 0x0010 (0x0110 - 0x0100)
struct FAIFaunaSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
// 0x0014
struct FAthenaAIControllerSenseSettings
{
	bool                                               EnableSight;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableHearing;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDamage;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SightRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHearingRange;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
// 0x0020
struct FAthenaAIControllerSenseSettingOverride
{
	UClass*                                            AIStrategy;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FAthenaAIControllerSenseSettings                   SenseSettings;                                            // 0x0008(0x0014) (Edit)
	bool                                               ClearPerceivedData;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// 0x0010
struct FAIStategyControllerMovementMod
{
	UClass*                                            AIStrategy;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideControlRotationInterpSpeed;                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIEncounterSpecification
// 0x00C8
struct FAIEncounterSpecification
{
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	UAthenaAIControllerParamsDataAsset*                Skillset;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	ULoadoutAsset*                                     Loadout;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	UAthenaAIFormDataAsset*                            Form;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	UAthenaAIAmmoDataAsset*                            Ammo;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            AIClass;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	UAIPartsCategory*                                  PartsCategory;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                   // 0x0050(0x0020)
	int                                                TeamColorIndex;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	FName                                              DioramaRole;                                              // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	FText                                              LocalisableName;                                          // 0x0080(0x0038)
	FEncounterParams                                   EncounterTrackingParams;                                  // 0x00B8(0x000C)
	bool                                               ShowNameplate;                                            // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingDialogue;                                          // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDioramaPawn
// 0x0048
struct FAIDioramaPawn
{
	APawn*                                             Pawn;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDioramaRoleDesc
// 0x0028
struct FAIDioramaRoleDesc
{
	FName                                              RoleName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FStringAssetReference                              CustomAnimationAsset;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	FName                                              CustomAnimationToRunOnSpawn;                              // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            StartingItemCategory;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDioramaLocationSourceComponentData
// 0x0040
struct FAIDioramaLocationSourceComponentData
{
	FTransform                                         RelativeTransform;                                        // 0x0000(0x0030) (Edit, IsPlainOldData)
	AActor*                                            Interactable;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.IslandDioramas
// 0x0010
struct FIslandDioramas
{
	TArray<TScriptInterface<class UAIDioramaLocationSourceInterface>> Entries;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.DioramaCategoryEntries
// 0x00A0
struct FDioramaCategoryEntries
{
	TMap<FName, FIslandDioramas>                       EntriesByIslandName;                                      // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetFlyingStrategyProperties
// 0x0018
struct FPetFlyingStrategyProperties
{
	UClass*                                            Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfFlying;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFlyingMeshZOffset;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFlyingMeshZOffset;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetMovementRequest
// 0x000C
struct FPetMovementRequest
{
	TEnumAsByte<EAthenaAnimationPetRoamingState>       State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TargetMeshZOffset;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AdjustingFlight;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetTurnRateModifier
// 0x0010
struct FPetTurnRateModifier
{
	UClass*                                            Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnRateModifier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetLoadedMaterial
// 0x0010
struct FPetLoadedMaterial
{
	UMaterialInstance*                                 MaterialInstance;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CastShadows;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetPartSizeMapping
// 0x0008
struct FPetPartSizeMapping
{
	TEnumAsByte<EPetSize>                              PetSize;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PetScale;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartId
// 0x0008
struct FAIPartId
{
	FName                                              PartId;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PetMaterialEntry
// 0x0018
struct FPetMaterialEntry
{
	FStringAssetReference                              MaterialReference;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               CastShadows;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetWieldableReactMapping
// 0x0010
struct FPetWieldableReactMapping
{
	UClass*                                            WieldableType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              ReactId;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerDamageTargetScoreFromPerceivedTarget
// 0x0014
struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget
{
	float                                              MinDamageTargetScore;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageTargetScore;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageForMinDamageTargetScore;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageForMaxDamageTargetScore;                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateToDecayDamagedFromTarget;                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerHealthCustomisation
// 0x000C
struct FAthenaAIControllerHealthCustomisation
{
	bool                                               OverrideMaxHealth;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMaxHealthWithMinMax;                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MinHealth;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// 0x0038
struct FAthenaAIControllerWeightedRangesParamValue
{
	FName                                              ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  Value;                                                    // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.TinySharkParams
// 0x00B8
struct FTinySharkParams
{
	UClass*                                            TinySharkType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRadius;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            SpawnOffset;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            TinySharkAIType;                                          // 0x0018(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> TinySharkSkillset;                                        // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class ULoadoutAsset>                     TinySharkLoadout;                                         // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	UClass*                                            TinySharkClassID;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  LifetimeTimeout;                                          // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	float                                              TrackedShipDistanceThreshold;                             // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepositionTime;                                           // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkShipSpawnData
// 0x0068
struct FTinySharkShipSpawnData
{
	UClass*                                            ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FWeightedProbabilityRangeOfRanges                  Timer;                                                    // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UAthenaAIControllerParamsDataAsset>> ControllerParams;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FWeightedProbabilityRange                          ControllerParamsToUse;                                    // 0x0048(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.TinySharkServiceParams
// 0x0028
struct FTinySharkServiceParams
{
	UTinySharkParamsDataAsset*                         TinySharkParams;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FTinySharkShipSpawnData>                    SpawnForShipData;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UEnvQuery*                                         SpawnForShipQuery;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnFailureTimer;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTarget
// 0x000C
struct FAthenaAICharacterCannonTarget
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              TargetLocation;                                           // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTargetingParams
// 0x0010
struct FAthenaAICharacterCannonTargetingParams
{
	TArray<FAthenaAICharacterCannonTarget>             Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// 0x0010
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
{
	UClass*                                            ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       DistanceInMToProjectileHitChanceCurve;                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// 0x0018
struct FAthenaAICharacterControllerItemCategoryNamedParams
{
	UClass*                                            ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAthenaAIControllerParamValue>              NamedControllerParams;                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// 0x0030
struct FAthenaAIItemParamValue
{
	TAssetPtr<class UClass>                            ItemClass;                                                // 0x0000(0x0020) (Edit)
	FName                                              ParamName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerSpawnItemDescForItemCategory
// 0x0010
struct FAthenaAICharacterControllerSpawnItemDescForItemCategory
{
	UClass*                                            ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            ItemDesc;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIAbilityDamageStage
// 0x0010
struct FAthenaAIAbilityDamageStage
{
	TArray<UAthenaAIAbilityStageParams*>               AbilitiesInStage;                                         // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerWeightedAmmoType
// 0x0010
struct FAthenaAICharacterControllerWeightedAmmoType
{
	UClass*                                            AmmoType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weighting;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIAmmoRankMapping
// 0x0018
struct FAIAmmoRankMapping
{
	UAthenaAIAmmoDataAsset*                            Ammo;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIDebugVisualisationLine
// 0x0020
struct FAIDebugVisualisationLine
{
	FVector                                            From;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            To;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// 0x0040
struct FAIDebugVisualisationBox
{
	FVector                                            Centre;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            Extents;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	FQuat                                              Rotation;                                                 // 0x0020(0x0010) (IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// 0x0024
struct FAIDebugVisualisationCylinder
{
	FVector                                            To;                                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            From;                                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// 0x0018
struct FAIDebugVisualisationSphere
{
	FVector                                            Centre;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// 0x002C
struct FAIDebugVisualisationCone
{
	FVector                                            Origin;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            Direction;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleWidthRadians;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleHeightRadians;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// 0x0020
struct FAIIndividualVarietyEntry
{
	TArray<FStringAssetReference>                      Loadouts;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RankOffset;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// 0x0028
struct FAIFormVarietyEntry
{
	FStringAssetReference                              Form;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<FAIIndividualVarietyEntry>                  Individuals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.TargetSkillsetProgressionPair
// 0x0020
struct FTargetSkillsetProgressionPair
{
	FStringAssetReference                              CrewSkillset;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              CaptainSkillset;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.TargetItemDropProgressionPair
// 0x0020
struct FTargetItemDropProgressionPair
{
	FStringAssetReference                              CrewItemSpawn;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              CaptainItemSpawn;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIEncounterGenerationRecipeFeatureBasedRankOrderList
// 0x0018
struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList
{
	FName                                              FeatureName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<UAIEncounterGenerationRecipe*>              Recipes;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIFormRankMapping
// 0x0018
struct FAIFormRankMapping
{
	UAthenaAIFormDataAsset*                            Form;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// 0x0010
struct FAIPartsCategoryMapping
{
	UClass*                                            ClassId;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UAIPartsCategory*                                  PartsCategory;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// 0x0018
struct FAIPartsCategoryFormMapping
{
	UAthenaAIFormDataAsset*                            Form;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FAIPartsCategoryMapping>                    CategoryMappings;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// 0x0018
struct FAISkillsetRankMapping
{
	UAthenaAIControllerParamsDataAsset*                Skillset;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIDropSpawnerRankMapping
// 0x0030
struct FAIDropSpawnerRankMapping
{
	TAssetPtr<class UClass>                            SpawnerClass;                                             // 0x0000(0x0020) (Edit, BlueprintVisible)
	TArray<float>                                      Weights;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// 0x0018
struct FAILoadoutRankMapping
{
	ULoadoutAsset*                                     Loadout;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AITypeData
// 0x0058
struct FAITypeData
{
	FName                                              AITypeName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FStringClassReference                              AIPawnClass;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              DefaultDebugSkillset;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	FStringAssetReference                              DefaultDebugLoadout;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	UClass*                                            DefaultDebugAIClassId;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequireNavMesh;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                AIRegionCostUnits;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIWorldCostUnits;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              FeatureToggle;                                            // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnWaveSequenceRankMapping
// 0x0018
struct FAISpawnWaveSequenceRankMapping
{
	UAISpawnWaveSequence*                              SpawnWaveSequence;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIWeightedProbabilityRangeOfRangesRankMapping
// 0x0018
struct FAIWeightedProbabilityRangeOfRangesRankMapping
{
	UAIWeightedProbabilityRangeOfRangesAsset*          RangeOfRanges;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.CustomPlayersAITrackerData
// 0x0020
struct FCustomPlayersAITrackerData
{
	UAIPlayerTracker*                                  Tracker;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIPartIdNumVariantInfo
// 0x000C
struct FAIPartIdNumVariantInfo
{
	FName                                              AIPartId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumVariants;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.ReplicatedAIPartsData
// 0x0018
struct FReplicatedAIPartsData
{
	UAIPartsCategory*                                  PartsCategory;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FAIPartId                                          AIPartId;                                                 // 0x0008(0x0008)
	int                                                MeshIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamColorIndex;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.SpawnLocationGroup
// 0x0020
struct FSpawnLocationGroup
{
	TArray<FName>                                      AllowedSpawnTypes;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<FVector>                                    SpawnLocations;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISpawnContextData
// 0x0010
struct FAISpawnContextData
{
	FName                                              Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            Id;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPerPlayerSpawnerPlayerDetailsUnit
// 0x0030
struct FAIPerPlayerSpawnerPlayerDetailsUnit
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaAI.TemporaryPlayerDetailsUnitEntry
// 0x0038
struct FTemporaryPlayerDetailsUnitEntry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AthenaAI.AICustomNameTitleMapping
// 0x0040
struct FAICustomNameTitleMapping
{
	UClass*                                            AIClassId;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FText                                              Title;                                                    // 0x0008(0x0038) (Edit)
};

// ScriptStruct AthenaAI.AICustomClassIdNameOverrides
// 0x0020
struct FAICustomClassIdNameOverrides
{
	TArray<UClass*>                                    ClassIds;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<FText>                                      Names;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.ChanceForSharksToBlockSirenEncounterData
// 0x000C
struct FChanceForSharksToBlockSirenEncounterData
{
	int                                                NumberOfSharks;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToSpawn;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusToCheck;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PerDepthSpawnChance
// 0x000C
struct FPerDepthSpawnChance
{
	float                                              DepthUpperBound;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DepthLowerBound;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToSpawn;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PlayerInWaterData
// 0x0020
struct FPlayerInWaterData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AthenaAI.SirenEncounterData
// 0x0028
struct FSirenEncounterData
{
	UWorld*                                            GameWorld;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UAIPerPlayerSpawner*                               SirenSpawner;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	USimpleAIRegion*                                   AIRegion;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	UAIProximityPlayerTracker*                         ProximityPlayerTracker;                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ShutdownTime;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESirenEncounterState>                  SirenEncounterState;                                      // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.MinMaxBurrowAbility
// 0x0008
struct FMinMaxBurrowAbility
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.WeightedAmmoType
// 0x0010
struct FWeightedAmmoType
{
	float                                              ProbabilityAtRange;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	UClass*                                            AmmoType;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.WeightedAmmoTypeRange
// 0x0018
struct FWeightedAmmoTypeRange
{
	float                                              MinRange;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<FWeightedAmmoType>                          AmmoTypeProbabilities;                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// 0x0010
struct FCarriedItemThreatOverride
{
	UClass*                                            ItemDesc;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.HearingThreat
// 0x0010
struct FHearingThreat
{
	FName                                              SoundTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierSpeedThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BlackboardValueCondition
// 0x0038
struct FBlackboardValueCondition
{
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0000(0x0028) (Edit)
	TEnumAsByte<EBlackboardValueComparisonType>        Comparison;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnEntry;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnExit;                                                   // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
// 0x0058
struct FChanceAndBlackboardKeyPair
{
	FAIDataProviderFloatValue                          Chance;                                                   // 0x0000(0x0030) (Edit)
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0030(0x0028) (Edit)
};

// ScriptStruct AthenaAI.ConditionalBasedOnBlackboardKey
// 0x0038
struct FConditionalBasedOnBlackboardKey
{
	bool                                               UseCondition;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	FBlackboardKeySelector                             BlackboardKey;                                            // 0x0008(0x0028) (Edit)
	bool                                               NegateCondition;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.WeightedAIStrategyChance
// 0x0038
struct FWeightedAIStrategyChance
{
	UClass*                                            Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FAIDataProviderFloatValue                          WeightedChance;                                           // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AIStrategyVulnerabilityData
// 0x0018
struct FAIStrategyVulnerabilityData
{
	UClass*                                            Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EHealthChangedReason>>          PreventedHealthChanges;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.AIAbilityDebugReplicatedIntervals
// 0x000C
struct FAIAbilityDebugReplicatedIntervals
{
	float                                              ActivationTimerCooldown;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeNextExecution;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageBeforeNextExecution;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterWave
// 0x0020
struct FAIEncounterWave
{
	TArray<FAIEncounterSpecification>                  Specifications;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        SpecificationSpawnOrder;                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// 0x00C8
struct FAIBountySpawnerParams
{
	TArray<FAIEncounterWave>                           AISpawnerCreationDesc;                                    // 0x0000(0x0010) (ZeroConstructor)
	FStringAssetReference                              TeamColor;                                                // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        NumTargetsInWave;                                         // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        NumCaptainsInWave;                                        // 0x0030(0x0010) (ZeroConstructor)
	float                                              MinTimeBetweenSpawns;                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenSpawns;                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenWaves;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenWaves;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	FWeightedProbabilityRange                          WavesPerRelocate;                                         // 0x0050(0x0020)
	FWeightedProbabilityRange                          WaveSplitChance;                                          // 0x0070(0x0020)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0090(0x0010) (ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumWavesPerGroup;                                         // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumWaveGroups;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumTotalWaves;                                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumTargetsPerWaveGroup;                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumCaptainsPerWaveGroup;                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<UClass*>                                    AICombatDialogue;                                         // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// 0x0010
struct FEventAIStartedDeadActionState
{
	TEnumAsByte<ECharacterDeathType>                   DeathReason;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	AActor*                                            Killer;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// 0x0010
struct FEventPawnFinishedDying
{
	APawn*                                             AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnStartedDying
// 0x0018
struct FEventPawnStartedDying
{
	APawn*                                             AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	AActor*                                            Instigator;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
// 0x0001
struct FEventOwnedPawnFinishedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnStartedDying
// 0x0010
struct FEventOwnedPawnStartedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	AActor*                                            Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BountySpawnerTargetDesc
// 0x0018
struct FBountySpawnerTargetDesc
{
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0002(0x0016) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
// 0x0014
struct FAIBountySpawnerWaveLocation
{
	FVector                                            Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowForTarget;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnerArchive
// 0x0008
struct FAISpawnerArchive
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveEntry
// 0x0004
struct FAIBountySpawnerArchiveWaveEntry
{
	int                                                NumPawnsToSpawn;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveGroupEntry
// 0x0018
struct FAIBountySpawnerArchiveWaveGroupEntry
{
	int                                                NumNonTargetAIKills;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumTargetAIKills;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<FAIBountySpawnerArchiveWaveEntry>           WaveEntries;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchive
// 0x0020 (0x0028 - 0x0008)
struct FAIBountySpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<FAIBountySpawnerArchiveWaveGroupEntry>      WaveGroupEntries;                                         // 0x0010(0x0010) (ZeroConstructor)
	float                                              BountyAudioIntensity;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// 0x0001
struct FBountySpawnerNewWaveGroupSpawnedEvent
{
	bool                                               IsFinalWave;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FBountySpawnerAudioChangedNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<EBountySpawnerAudioState>              AudioState;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountySpawnerType>                    BountyType;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	FVector                                            BountyPosition;                                           // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// 0x0068
struct FEventAIBountySpawnerTargetKilled
{
	FText                                              TargetName;                                               // 0x0000(0x0038)
	AActor*                                            TargetActor;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              RewardId;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	AItemInfo*                                         ItemDropped;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	FVector                                            DeathLocation;                                            // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	AActor*                                            Instigator;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// 0x0028
struct FEventAIBountySpawnerWaveCompleted
{
	FName                                              IslandName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalWaves;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	AActor*                                            InstigatorOfFinalAIPawnDeath;                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.MerchantCrateMetaWrapper
// 0x0030 (0x0048 - 0x0018)
struct FMerchantCrateMetaWrapper : public FItemMetaBase
{
	float                                              Health;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	FStringAssetReference                              FaunaType;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              TimeSpentStarving;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeToStarveInSeconds;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	FVector                                            TempSpawnLocationForActor;                                // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
// 0x0001
struct FEventFaunaThreatLevelChanged
{
	TEnumAsByte<EAIThreatLevel>                        ThreatLevel;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventFaunaAgitationEnded
// 0x0001
struct FEventFaunaAgitationEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventFaunaAgitationBegun
// 0x0008
struct FEventFaunaAgitationBegun
{
	AActor*                                            SourceActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventSwimRotationModeChanged
// 0x0008
struct FEventSwimRotationModeChanged
{
	TEnumAsByte<ESwimRotationMode>                     NewSwimRotationMode;                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NewRotationRate;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkWorldSettingsParams
// 0x0001
struct FTinySharkWorldSettingsParams
{
	bool                                               TinySharkEnabled;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkEQSRequest
// 0x0048
struct FTinySharkEQSRequest
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkSpawnedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTinySharkSpawnedNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AthenaAI.TinySharkKilledNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTinySharkKilledNetworkEvent : public FNetworkEventStruct
{

};

// ScriptStruct AthenaAI.EventTinySharkKilled
// 0x0001
struct FEventTinySharkKilled
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventTinySharkDamaged
// 0x0058
struct FEventTinySharkDamaged
{
	FImpactDamageEvent                                 ImpactDamageEvent;                                        // 0x0000(0x0058)
};

// ScriptStruct AthenaAI.EventTinySharkDespawned
// 0x0001
struct FEventTinySharkDespawned
{
	TEnumAsByte<ETinySharkDespawnReason>               DespawnReason;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventTinySharkSpawned
// 0x0020
struct FEventTinySharkSpawned
{
	FString                                            TinySharkPartTag;                                         // 0x0000(0x0010) (ZeroConstructor)
	FGuid                                              SpawnConfigId;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkCollidedTelemetryEvent
// 0x0068
struct FTinySharkCollidedTelemetryEvent
{
	FString                                            TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            TinySharkName;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            ObstacleName;                                             // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FVector                                            CollisionLocation;                                        // 0x0030(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FVector                                            HomeLocation;                                             // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FString                                            BehaviourTreeInfo;                                        // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            BlackboardInfo;                                           // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AthenaAI.TinySharkDespawnTelemetryEvent
// 0x0018
struct FTinySharkDespawnTelemetryEvent
{
	FString                                            TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ETinySharkDespawnReason>               TinySharkDespawnReason;                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkSpawnTelemetryEvent
// 0x0030
struct FTinySharkSpawnTelemetryEvent
{
	FString                                            TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FString                                            TinySharkType;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	FGuid                                              ConfigSpawnId;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIExclusionZone
// 0x0018
struct FAIExclusionZone
{
	FVector                                            Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              RadiusSquared;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPartsRetrievalComponentBeforeBeginLoad
// 0x0001
struct FEventAIPartsRetrievalComponentBeforeBeginLoad
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFixedWavesSpawnerArchive
// 0x0018 (0x0020 - 0x0008)
struct FAIFixedWavesSpawnerArchive : public FAISpawnerArchive
{
	TArray<int>                                        NumSpawnedPawnsInWaves;                                   // 0x0008(0x0010) (ZeroConstructor)
	bool                                               WavesSpawnedOnSpottedNewTarget;                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIIncrementalWaveSpawnerArchive
// 0x0010 (0x0018 - 0x0008)
struct FAIIncrementalWaveSpawnerArchive : public FAISpawnerArchive
{
	FVector                                            LastTargetPosition;                                       // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumSpawnedPawns;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnUnit
// 0x0018
struct FAIPerCrewSpawnerRespawnUnit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// 0x0030
struct FAIPerCrewSpawnerCrewUnit
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<FAISpawnerWave>                             SelectedWaves;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIProgressiveWavesSpawnerArchive
// 0x0008 (0x0010 - 0x0008)
struct FAIProgressiveWavesSpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AITargetBounds
// 0x0018
struct FAITargetBounds
{
	FVector                                            Offset;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            Extents;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetInfo
// 0x0034
struct FAITargetInfo
{
	FAITargetBounds                                    Bounds;                                                   // 0x0000(0x0018)
	FVector                                            TargetPos;                                                // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	FVector                                            TargetVelocity;                                           // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              TargetYaw;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerTargetPickingData
// 0x0038
struct FAthenaAIControllerTargetPickingData
{
	FString                                            TargetName;                                               // 0x0000(0x0010) (ZeroConstructor)
	bool                                               BestTargetByScore;                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentTargetActor;                                     // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              TargetScore;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistScore;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FacingScore;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetWeightScore;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageScore;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumTargeting;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RecentDamage;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventSporeBreathAIAbilityFinished
// 0x0001
struct FEventSporeBreathAIAbilityFinished
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventSporeBreathAIAbilityStarted
// 0x0001
struct FEventSporeBreathAIAbilityStarted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIVulnerabilityAbilityEnded
// 0x0001
struct FEventAIVulnerabilityAbilityEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIVulnerabilityAbilityStarted
// 0x0001
struct FEventAIVulnerabilityAbilityStarted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// 0x0008
struct FEventAIPawnCarrierChange
{
	AActor*                                            Carrier;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// 0x0001
struct FEventAIDebugTextUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIControllerUnPossess
// 0x0001
struct FEventAIControllerUnPossess
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIKnockbackEnded
// 0x0001
struct FEventAIKnockbackEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIKnockbackStarted
// 0x0018
struct FEventAIKnockbackStarted
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventNewAIStrategyBPReadable
// 0x0008
struct FEventNewAIStrategyBPReadable
{
	UClass*                                            NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventNewAIStrategy
// 0x0008
struct FEventNewAIStrategy
{
	UClass*                                            NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnRequestDespawn
// 0x0001
struct FEventPawnRequestDespawn
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnRemoveOwnership
// 0x0008
struct FEventPawnRemoveOwnership
{
	APawn*                                             AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// 0x0001
struct FEventOwnedPawnRemoveOwnership
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPartRetrievalRequestFailed
// 0x0001
struct FEventAIPartRetrievalRequestFailed
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventVisualAppearanceSelected
// 0x0018
struct FEventVisualAppearanceSelected
{
	UAIPartsCategory*                                  PartsCategory;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FAIPartId                                          AIPartId;                                                 // 0x0008(0x0008)
	int                                                PartsIndexToUse;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ColorTextureIndex;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// 0x0030
struct FEventAILoadoutSelected
{
	FItemLoadout                                       Loadout;                                                  // 0x0000(0x0020)
	UClass*                                            NonStorableItem;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIAmmoSelected
// 0x0008
struct FEventAIAmmoSelected
{
	UAthenaAIAmmoDataAsset*                            Ammo;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIFormSelected
// 0x0008
struct FEventAIFormSelected
{
	UAthenaAIFormDataAsset*                            Form;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
// 0x0001
struct FEventAIPawnReadyToConstructDebugText
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
// 0x0050
struct FEventOwnedPawnFinishedSpawning
{
	UObject*                                           AICoordinator;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              Region;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	FVector                                            SpawnPos;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	AActor*                                            ActorToPerceiveOnSpawn;                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistanceToPerceiveOnSpawn;                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	UAthenaAIControllerParamsDataAsset*                Skillset;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              HomeRegionZone;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	UObject*                                           TargetInteractableOnSpawn;                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	UAISpawner*                                        OwnerAISpawner;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// 0x0008
struct FEventPlayerLeftAISpawnableWater
{
	AActor*                                            Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// 0x0018
struct FEventPlayerEnterAISpawnableWater
{
	AActor*                                            Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// 0x0020
struct FEventPlayerSetFootUponAISpawnRegion
{
	AActor*                                            Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// 0x0018
struct FEventPlayerLeftAISpawnRegion
{
	AActor*                                            Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// 0x0020
struct FEventPlayerEnteredAISpawnRegion
{
	AActor*                                            Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAllAIProgressiveWavesCompleted
// 0x0001
struct FEventAllAIProgressiveWavesCompleted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPawnRemovedFromAIRegion
// 0x0010
struct FEventAIPawnRemovedFromAIRegion
{
	APawn*                                             AIPawn;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPawnAddedToAIRegion
// 0x0010
struct FEventAIPawnAddedToAIRegion
{
	APawn*                                             AIPawn;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventOceanCrawlerAIBuffAudioRequest
// 0x0001
struct FEventOceanCrawlerAIBuffAudioRequest
{
	bool                                               IsBuffGiver;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOceanCrawlerAIAbilityAudioRequest
// 0x0008
struct FEventOceanCrawlerAIAbilityAudioRequest
{
	TEnumAsByte<EOceanCrawlerAbilityAudioKey>          RequestAudioKey;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AudioDelay;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAthenaAISpawnBeginAnim
// 0x0001
struct FEventAthenaAISpawnBeginAnim
{
	TEnumAsByte<EAthenaAISpawnType>                    SpawnType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAthenaAISpawnActive
// 0x0002
struct FEventAthenaAISpawnActive
{
	TEnumAsByte<EAthenaAISpawnType>                    SpawnType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SpawnActive;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnerTelemetryEvent
// 0x0040
struct FAISpawnerTelemetryEvent
{
	FString                                            AISpawnerType;                                            // 0x0000(0x0010) (ZeroConstructor)
	FString                                            AISpawnerRegion;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<FString>                                    AISpawnerContexts;                                        // 0x0020(0x0010) (ZeroConstructor)
	int                                                AISpawnerWaveSpawnNumber;                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AISpawnerWaveDelayBefore;                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AISpawnerWaveDelayAfter;                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AITelemetryFragmentInput
// 0x00CF (0x00D0 - 0x0001)
struct FAITelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class APawn>                        AIPawn;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FAIEncounterSpecification                          AIEncounterSpecification;                                 // 0x0008(0x00C8)
};

// ScriptStruct AthenaAI.AITelemetryFragment
// 0x0070
struct FAITelemetryFragment
{
	FString                                            AIType;                                                   // 0x0000(0x0010) (ZeroConstructor)
	FString                                            AIId;                                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<FString>                                    AILoadOut;                                                // 0x0020(0x0010) (ZeroConstructor)
	FString                                            AIPawnType;                                               // 0x0030(0x0010) (ZeroConstructor)
	FString                                            AISkillset;                                               // 0x0040(0x0010) (ZeroConstructor)
	FString                                            AIForm;                                                   // 0x0050(0x0010) (ZeroConstructor)
	FString                                            AIClass;                                                  // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.PlayerKillAITelemetryEvent
// 0x0010
struct FPlayerKillAITelemetryEvent
{
	FGuid                                              AttackId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnTelemetryEvent
// 0x0010
struct FAISpawnTelemetryEvent
{
	FString                                            LocationName;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIActorTimeout
// 0x0010
struct FAIActorTimeout
{
	AActor*                                            AIActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
