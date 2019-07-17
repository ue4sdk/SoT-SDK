#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaAI_enums.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"
#include "SoT_Animation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAI.AIPartId
// 0x0008
struct FAIPartId
{
	struct FName                                       PartId;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRange
// 0x0038
struct FAthenaAIAbilityPlayerBasedRange
{
	int                                                MaxPlayers;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           WeightedArray;                                            // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRanges
// 0x0010
struct FAthenaAIAbilityPlayerBasedRanges
{
	TArray<struct FAthenaAIAbilityPlayerBasedRange>    AbilityRanges;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIAbilityFollowUp
// 0x0010
struct FAIAbilityFollowUp
{
	class UClass*                                      AbilityType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFormDamageResponse
// 0x0010
struct FAIFormDamageResponse
{
	class UClass*                                      DamagerType;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReaction;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsKnockbackDisabled;                                      // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsStunDisabled;                                           // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
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
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerSenseSettings            SenseSettings;                                            // 0x0008(0x0014) (Edit)
	bool                                               ClearPerceivedData;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
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

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// 0x000C
struct FAthenaAIControllerParamValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// 0x0038
struct FAthenaAIControllerWeightedRangesParamValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           Value;                                                    // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// 0x0018
struct FAIStrategyMovementProperties
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedAmp;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAccelAmp;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideRVOAvoidanceRadius;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideBlendSpeed;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTarget
// 0x000C
struct FAthenaAICharacterCannonTarget
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetLocation;                                           // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTargetingParams
// 0x0010
struct FAthenaAICharacterCannonTargetingParams
{
	TArray<struct FAthenaAICharacterCannonTarget>      Params;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// 0x0010
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceInMToProjectileHitChanceCurve;                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// 0x0018
struct FAthenaAICharacterControllerItemCategoryNamedParams
{
	class UClass*                                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// 0x0030
struct FAthenaAIItemParamValue
{
	TAssetPtr<class UClass>                            ItemClass;                                                // 0x0000(0x0020) (Edit)
	struct FName                                       ParamName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerWeightedAmmoType
// 0x0010
struct FAthenaAICharacterControllerWeightedAmmoType
{
	class UClass*                                      AmmoType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weighting;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIAmmoRankMapping
// 0x0018
struct FAIAmmoRankMapping
{
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIDebugVisualisationLine
// 0x0020
struct FAIDebugVisualisationLine
{
	struct FVector                                     From;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     To;                                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// 0x0040
struct FAIDebugVisualisationBox
{
	struct FVector                                     Centre;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// 0x0024
struct FAIDebugVisualisationCylinder
{
	struct FVector                                     To;                                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     From;                                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// 0x0018
struct FAIDebugVisualisationSphere
{
	struct FVector                                     Centre;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// 0x002C
struct FAIDebugVisualisationCone
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleWidthRadians;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleHeightRadians;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDioramaPawn
// 0x0048
struct FAIDioramaPawn
{
	class APawn*                                       Pawn;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIDioramaRoleDesc
// 0x0028
struct FAIDioramaRoleDesc
{
	struct FName                                       RoleName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       CustomAnimationAsset;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FName                                       CustomAnimationToRunOnSpawn;                              // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartingItemCategory;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDioramaLocationSourceComponentData
// 0x0040
struct FAIDioramaLocationSourceComponentData
{
	struct FTransform                                  RelativeTransform;                                        // 0x0000(0x0030) (Edit, IsPlainOldData)
	class AActor*                                      Interactable;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// 0x0020
struct FAIIndividualVarietyEntry
{
	TArray<struct FStringAssetReference>               Loadouts;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RankOffset;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// 0x0028
struct FAIFormVarietyEntry
{
	struct FStringAssetReference                       Form;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIIndividualVarietyEntry>           Individuals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.TargetSkillsetProgressionPair
// 0x0020
struct FTargetSkillsetProgressionPair
{
	struct FStringAssetReference                       CrewSkillset;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CaptainSkillset;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIEncounterGenerationRecipeFeatureBasedRankOrderList
// 0x0018
struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList
{
	struct FName                                       FeatureName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIFormRankMapping
// 0x0018
struct FAIFormRankMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// 0x0018
struct FAILoadoutRankMapping
{
	class ULoadoutAsset*                               Loadout;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// 0x0018
struct FAISkillsetRankMapping
{
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// 0x0010
struct FAIPartsCategoryMapping
{
	class UClass*                                      ClassId;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// 0x0018
struct FAIPartsCategoryFormMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIPartsCategoryMapping>             CategoryMappings;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AITypeData
// 0x0058
struct FAITypeData
{
	struct FName                                       AITypeName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       AIPawnClass;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugSkillset;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugLoadout;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultDebugAIClassId;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequireNavMesh;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                AIRegionCostUnits;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIWorldCostUnits;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FeatureToggle;                                            // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnTypeParams
// 0x00B8
struct FAISpawnTypeParams
{
	TAssetPtr<class UClass>                            AIClass;                                                  // 0x0000(0x0020) (Edit)
	struct FStringAssetReference                       SkillsetOverride;                                         // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutOverride;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormOverride;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoOverride;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AIClassIdOverride;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TeamColorOverride;                                        // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DioramaRole;                                              // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       LocalisableName;                                          // 0x0080(0x0038) (Edit)
};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// 0x00C0
struct FWeightedAISpawnTypeParams
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTimesCanBeSelected;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAISpawnTypeParams                          Params;                                                   // 0x0008(0x00B8) (Edit)
};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// 0x0048
struct FAISpawnTypeParamsCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FWeightedAISpawnTypeParams>          SpawnParams;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnerWave
// 0x0130
struct FAISpawnerWave
{
	float                                              SpawnChance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRange                   NumOfSpawnsInWave;                                        // 0x0008(0x0020) (Edit)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsOverride;                                  // 0x0028(0x0048) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeWave;                                          // 0x0070(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenSpawns;                                       // 0x00A0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeNextWaveIfSuccessful;                          // 0x00D0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeRetryingThisWaveIfUnsuccessful;                // 0x0100(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AISpawnWaveSequenceRankMapping
// 0x0018
struct FAISpawnWaveSequenceRankMapping
{
	class UAISpawnWaveSequence*                        SpawnWaveSequence;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIWeightedProbabilityRangeOfRangesRankMapping
// 0x0018
struct FAIWeightedProbabilityRangeOfRangesRankMapping
{
	class UAIWeightedProbabilityRangeOfRangesAsset*    RangeOfRanges;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// 0x0028
struct FAISpawnContextIdEncounterSettingsPair
{
	TArray<class UClass*>                              SpawnContexts;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UAIEncounterSettings*                        EncounterSettings;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawnWaveSequenceRankProgression*         SpawnWaveProgression;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIWeightedProbabilityRangeOfRangesRankProgression* RespawnTimerRangeProgression;                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.CustomPlayersAITrackerData
// 0x0020
struct FCustomPlayersAITrackerData
{
	class UAIPlayerTracker*                            Tracker;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.ReplicatedAIPartsData
// 0x0018
struct FReplicatedAIPartsData
{
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAIPartId                                   AIPartId;                                                 // 0x0008(0x0008)
	int                                                MeshIndex;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamColorIndex;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.SpawnLocationGroup
// 0x0020
struct FSpawnLocationGroup
{
	TArray<struct FName>                               AllowedSpawnTypes;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             SpawnLocations;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AISpawnContextData
// 0x0010
struct FAISpawnContextData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Id;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPersistentSpawnerWave
// 0x0010 (0x0140 - 0x0130)
struct FAIPersistentSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// 0x0048 (0x0188 - 0x0140)
struct FAIBountySpawnerWave : public FAIPersistentSpawnerWave
{
	bool                                               IsTarget;                                                 // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0142(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3D];                                      // 0x0143(0x003D) MISSED OFFSET
	class UClass*                                      BountyReward;                                             // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// 0x0028
struct FAIBountySpawnerWaveGroup
{
	TArray<struct FAIBountySpawnerWave>                Waves;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup;                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct AthenaAI.AICacheHealthSpawnerWave
// 0x0008 (0x0148 - 0x0140)
struct FAICacheHealthSpawnerWave : public FAIPersistentSpawnerWave
{
	bool                                               CacheHealthOnDespawn;                                     // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRankBasedDelay
// 0x0048
struct FAIPerCrewSpawnerRankBasedDelay
{
	int                                                MinRankInclusive;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRangeOfRanges           WeightedProbabilityRangeOfRanges;                         // 0x0018(0x0030) (Edit)
};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// 0x0010
struct FCarriedItemThreatOverride
{
	class UClass*                                      ItemDesc;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.HearingThreat
// 0x0010
struct FHearingThreat
{
	struct FName                                       SoundTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierSpeedThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BlackboardValueCondition
// 0x0038
struct FBlackboardValueCondition
{
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0000(0x0028) (Edit)
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
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0000(0x0030) (Edit)
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0030(0x0028) (Edit)
};

// ScriptStruct AthenaAI.WeightedAIStrategyChance
// 0x0038
struct FWeightedAIStrategyChance
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   WeightedChance;                                           // 0x0008(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// 0x0028
struct FAttackableTypeToAnimMapping
{
	TEnumAsByte<ESwimAttackableType>                   AttackType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     AnimMontage;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              AnimLength;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeIntoAnimOfAttack;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetKnockBackStrength;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RumbleTag;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.SwimAttackTargetShipImpulseData
// 0x0038
struct FSwimAttackTargetShipImpulseData
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushImpulseForce;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PushImpulseLocation;                                      // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushForceScalingFactorForeAndAftOfShipLowerBound;         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushForceScalingFactorForeAndAftOfShipUpperBound;         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollImpulseForce;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RollImpulseLocation;                                      // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollForceScalingFactorForeAndAftOfShipLowerBound;         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollForceScalingFactorForeAndAftOfShipUpperBound;         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkParams
// 0x00B8
struct FTinySharkParams
{
	class UClass*                                      TinySharkType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRadius;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            TinySharkAIType;                                          // 0x0018(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> TinySharkSkillset;                                        // 0x0038(0x0020) (Edit, DisableEditOnInstance)
	TAssetPtr<class ULoadoutAsset>                     TinySharkLoadout;                                         // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      TinySharkClassID;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           LifetimeTimeout;                                          // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	float                                              TrackedShipDistanceThreshold;                             // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepositionTime;                                           // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkShipSpawnData
// 0x0068
struct FTinySharkShipSpawnData
{
	class UClass*                                      ShipSize;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           Timer;                                                    // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UAthenaAIControllerParamsDataAsset>> ControllerParams;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRange                   ControllerParamsToUse;                                    // 0x0048(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.TinySharkServiceParams
// 0x0028
struct FTinySharkServiceParams
{
	class UTinySharkParamsDataAsset*                   TinySharkParams;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTinySharkShipSpawnData>             SpawnForShipData;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnvQuery*                                   SpawnForShipQuery;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnFailureTimer;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIStrategyVulnerabilityData
// 0x0018
struct FAIStrategyVulnerabilityData
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EHealthChangedReason>>          PreventedHealthChanges;                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AthenaAI.PetFlyingStrategyProperties
// 0x0018
struct FPetFlyingStrategyProperties
{
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	class UClass*                                      Strategy;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnRateModifier;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// 0x0010 (0x0140 - 0x0130)
struct FAIFaunaSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// 0x0010
struct FAIStategyControllerMovementMod
{
	class UClass*                                      AIStrategy;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideControlRotationInterpSpeed;                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetLoadedMaterial
// 0x0010
struct FPetLoadedMaterial
{
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
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

// ScriptStruct AthenaAI.PetMaterialEntry
// 0x0018
struct FPetMaterialEntry
{
	struct FStringAssetReference                       MaterialReference;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               CastShadows;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetWieldableReactMapping
// 0x0010
struct FPetWieldableReactMapping
{
	class UClass*                                      WieldableType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ReactId;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterSpecification
// 0x00A0
struct FAIEncounterSpecification
{
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0000(0x0020)
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               Loadout;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIClass;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamColorIndex;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DioramaRole;                                              // 0x0054(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       LocalisableName;                                          // 0x0060(0x0038)
	bool                                               ShowNameplate;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIEncounterWave
// 0x0020
struct FAIEncounterWave
{
	TArray<struct FAIEncounterSpecification>           Specifications;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        SpecificationSpawnOrder;                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// 0x00A8
struct FAIBountySpawnerParams
{
	TArray<struct FAIEncounterWave>                    AISpawnerCreationDesc;                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        NumTargetsInWave;                                         // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        NumCaptainsInWave;                                        // 0x0030(0x0010) (ZeroConstructor)
	float                                              MinTimeBetweenSpawns;                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenSpawns;                                     // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenWaves;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenWaves;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x0050(0x0020)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x0070(0x0020)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0090(0x0010) (ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIFormComponentAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FAthenaAIFormComponentAggregateTickFunction : public FTickFunction
{
	TArray<class UAthenaAIFormComponent*>              AIFormComponents;                                         // 0x0048(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnerArchive
// 0x0008
struct FAISpawnerArchive
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIPartsRetrievalComponentBeforeBeginLoad
// 0x0001
struct FEventAIPartsRetrievalComponentBeforeBeginLoad
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
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
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowForTarget;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
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
	TArray<struct FAIBountySpawnerArchiveWaveEntry>    WaveEntries;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerArchive
// 0x0020 (0x0028 - 0x0008)
struct FAIBountySpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FAIBountySpawnerArchiveWaveGroupEntry> WaveGroupEntries;                                         // 0x0010(0x0010) (ZeroConstructor)
	float                                              BountyAudioIntensity;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
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
	struct FVector                                     LastTargetPosition;                                       // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumSpawnedPawns;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// 0x0010
struct FAIPerCrewSpawnerCrewUnit
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIProgressiveWavesSpawnerArchive
// 0x0008 (0x0010 - 0x0008)
struct FAIProgressiveWavesSpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FAthenaAIControllerAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIOnDelayedAssignedMeshConsumed
// 0x0010
struct FEventAIOnDelayedAssignedMeshConsumed
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               ConsumedMesh;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// 0x0008
struct FEventAIPawnCarrierChange
{
	class AActor*                                      Carrier;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIUnderwaterStateChange
// 0x0001
struct FEventAIUnderwaterStateChange
{
	bool                                               IsAboveWater;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAICustomEventDuringDeath
// 0x0001
struct FEventAICustomEventDuringDeath
{
	TEnumAsByte<ECustomAiEventDuringDeathEnum>         UserData;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// 0x0001
struct FEventAIDebugTextUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// 0x0001
struct FEventAIStartedDeadActionState
{
	TEnumAsByte<ECharacterDeathType>                   DeathReason;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
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
	class UClass*                                      NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventNewAIStrategy
// 0x0008
struct FEventNewAIStrategy
{
	class UClass*                                      NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
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
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// 0x0010
struct FEventPawnFinishedDying
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnStartedDying
// 0x0018
struct FEventPawnStartedDying
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// 0x0001
struct FEventOwnedPawnRemoveOwnership
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
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
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
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
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAIPartId                                   AIPartId;                                                 // 0x0008(0x0008)
	int                                                PartsIndexToUse;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ColorTextureIndex;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// 0x0028
struct FEventAILoadoutSelected
{
	struct FItemLoadout                                Loadout;                                                  // 0x0000(0x0020)
	class UClass*                                      NonStorableItem;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIAmmoSelected
// 0x0008
struct FEventAIAmmoSelected
{
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIFormSelected
// 0x0008
struct FEventAIFormSelected
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
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
	class UObject*                                     AICoordinator;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Region;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnPos;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      ActorToPerceiveOnSpawn;                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistanceToPerceiveOnSpawn;                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       HomeRegionZone;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     TargetInteractableOnSpawn;                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  OwnerAISpawner;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PeriodicAINoiseEventAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FPeriodicAINoiseEventAggregateTickFunction : public FTickFunction
{
	TArray<class UPeriodicAINoiseEventComponent*>      AINoiseEventComponents;                                   // 0x0048(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkExperienceAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FTinySharkExperienceAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.AIActorTimeout
// 0x0010
struct FAIActorTimeout
{
	class AActor*                                      AIActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
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

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// 0x0008
struct FEventPlayerLeftAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// 0x0018
struct FEventPlayerEnterAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// 0x0020
struct FEventPlayerSetFootUponAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// 0x0018
struct FEventPlayerLeftAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// 0x0020
struct FEventPlayerEnteredAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// 0x0001
struct FBountySpawnerNewWaveGroupSpawnedEvent
{
	bool                                               WaveHasCaptain;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
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
	struct FVector                                     BountyPosition;                                           // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerAllTargetsKilled
// 0x0018
struct FEventAIBountySpawnerAllTargetsKilled
{
	struct FName                                       IslandName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// 0x0038
struct FEventAIBountySpawnerTargetKilled
{
	class FString                                      TargetName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       RewardId;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ItemDropped;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     DeathLocation;                                            // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// 0x0028
struct FEventAIBountySpawnerWaveCompleted
{
	struct FName                                       IslandName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalWaves;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InstigatorOfFinalAIPawnDeath;                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAllAIProgressiveWavesCompleted
// 0x0001
struct FEventAllAIProgressiveWavesCompleted
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
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
	class AActor*                                      SourceActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetBounds
// 0x0018
struct FAITargetBounds
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetInfo
// 0x0034
struct FAITargetInfo
{
	struct FAITargetBounds                             Bounds;                                                   // 0x0000(0x0018)
	struct FVector                                     TargetPos;                                                // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              TargetYaw;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
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
	struct FImpactDamageEvent                          ImpactDamageEvent;                                        // 0x0000(0x0058)
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
	class FString                                      TinySharkPartTag;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FGuid                                       SpawnConfigId;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkDespawnTelemetryEvent
// 0x0018
struct FTinySharkDespawnTelemetryEvent
{
	class FString                                      TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ETinySharkDespawnReason>               TinySharkDespawnReason;                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.TinySharkSpawnTelemetryEvent
// 0x0030
struct FTinySharkSpawnTelemetryEvent
{
	class FString                                      TinySharkId;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TinySharkType;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGuid                                       ConfigSpawnId;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AICreatureCharacterAggregateTickFunction
// 0x00D0 (0x0118 - 0x0048)
struct FAICreatureCharacterAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0048(0x00D0) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetBaseTelemetryFragmentInput
// 0x0007 (0x0008 - 0x0001)
struct FPetBaseTelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class AActor>                       PetInfo;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PetBaseTelemetryFragment
// 0x0030
struct FPetBaseTelemetryFragment
{
	class FString                                      OwnerId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      PetPartId;                                                // 0x0010(0x0010) (ZeroConstructor)
	TEnumAsByte<EItemRepresentation>                   CurrentPetRepresentation;                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     PetLocation;                                              // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetFoodBase
// 0x0010
struct FEventPetFoodBase
{
	struct FGuid                                       FeedingInteractionId;                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetRefusedFood
// 0x0008 (0x0018 - 0x0010)
struct FEventPetRefusedFood : public FEventPetFoodBase
{
	class AActor*                                      FeedingActor;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetReactedToFood
// 0x0004 (0x0014 - 0x0010)
struct FEventPetReactedToFood : public FEventPetFoodBase
{
	TEnumAsByte<EPetFeedingReactionType>               ReactionType;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPetNotFed
// 0x0008 (0x0018 - 0x0010)
struct FEventPetNotFed : public FEventPetFoodBase
{
	class AActor*                                      FeedingActor;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetFed
// 0x0010 (0x0020 - 0x0010)
struct FEventPetFed : public FEventPetFoodBase
{
	class AActor*                                      FedWithActor;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      FeedingActor;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetOwnerAssigned
// 0x0008
struct FEventPetOwnerAssigned
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetCustomisationComplete
// 0x0001
struct FEventPetCustomisationComplete
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPetCustomisationReady
// 0x0010
struct FEventPetCustomisationReady
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPetReactBegun
// 0x000C
struct FEventPetReactBegun
{
	struct FName                                       ReactId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAnimationPetRoamingState>       ReactState;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPetReactCancellation
// 0x0008
struct FEventPetReactCancellation
{
	struct FName                                       ReactId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPetReactRequest
// 0x0008
struct FEventPetReactRequest
{
	struct FName                                       ReactId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PetReactedTelemetryEvent
// 0x0018
struct FPetReactedTelemetryEvent
{
	class FString                                      ReactId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EAthenaAnimationPetRoamingState>       AnimationState;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetDroppedTelemetryEvent
// 0x0001
struct FPetDroppedTelemetryEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.PetPickedUpTelemetryEvent
// 0x0001
struct FPetPickedUpTelemetryEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.RespawnPetEvent
// 0x0008
struct FRespawnPetEvent
{
	class AActor*                                      PetOwner;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
