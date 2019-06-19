#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAI.AthenaAIFormComponent
// 0x0080 (0x0150 - 0x00D0)
class UAthenaAIFormComponent : public UActorComponent
{
public:
	class UAthenaAIFormDataAsset*                      FormData;                                                 // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                        // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIFormComponent"));
		return ptr;
	}


	void OnRep_FormData();
};


// Class AthenaAI.AIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAIStrategyId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIStrategyId"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsDesc
// 0x0008 (0x0030 - 0x0028)
class UAIPartsDesc : public UDataAsset
{
public:
	struct FAIPartId                                   AIPartId;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsDesc"));
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTracker
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTracker : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnerPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UAISpawnerPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnerPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableType
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableType"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableComponent
// 0x0038 (0x0108 - 0x00D0)
class UAIInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UClass*                                      Type;                                                     // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DetachOffsetFromOwner;                                    // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanHaveTarget;                                            // 0x00EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x00ED(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableComponent"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_BaseConditional
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_BaseConditional : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_BaseConditional"));
		return ptr;
	}

};


// Class AthenaAI.AIAnimationStateId
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationStateId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAnimationStateId"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityType
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIAbilityType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityType"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbility
// 0x0038 (0x0060 - 0x0028)
class UAthenaAIAbility : public UObject
{
public:
	class UAthenaAIAbilityParams*                      AbilityParams;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAthenaAIController*                         Controller;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIPawnInterface>           AIPawnInterface;                                          // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityParams
// 0x0058 (0x0080 - 0x0028)
class UAthenaAIAbilityParams : public UObject
{
public:
	bool                                               UseTimeBetweenAbility;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FAthenaAIAbilityPlayerBasedRanges           ActivationTimerCooldown;                                  // 0x0030(0x0010) (Edit)
	struct FAthenaAIAbilityPlayerBasedRanges           TimeBetweenAbility;                                       // 0x0040(0x0010) (Edit)
	bool                                               UseDamageBetweenAbility;                                  // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FAthenaAIAbilityPlayerBasedRanges           DamageBetweenAbility;                                     // 0x0058(0x0010) (Edit)
	float                                              AbilityRadius;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FAIAbilityFollowUp>                  FollowUpAbilities;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityParams"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormDataAsset
// 0x0048 (0x0070 - 0x0028)
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     KilledVfxTemplate;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AICharacterAudioComponent;                                // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimNotifyEmitterWithObservers;                           // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementSpeedMultipler;                                   // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FeatureName;                                              // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UClass*                                      FormComponentClass;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIFormDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIItemParameterInterface
// 0x0000 (0x0028 - 0x0028)
class UAIItemParameterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIItemParameterInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset
// 0x0060 (0x0088 - 0x0028)
class UAthenaAIControllerSharedParamValuesDataAsset : public UDataAsset
{
public:
	bool                                               OverrideMeshScale;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              MeshScale;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCurrentTargetPerceivedNotVisibleAge;              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FAthenaAIControllerHealthCustomisation      HealthCustomisationValues;                                // 0x0048(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                  // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> NamedWeightedRangesControllerParams;                      // 0x0078(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                     // 0x0028(0x0014) (Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPerceivedNotVisibleAge;                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideTeamID;                                           // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAITeam>                         TeamID;                                                   // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              TargetSwitchToleranceDistance;                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<float>                                      TargetLoadWeightingBias;                                  // 0x0050(0x0010) (Edit, ZeroConstructor)
	float                                              VisionAngleToStartScalingDistance;                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScalingAppliedToDistanceAtMaxPeripheralVisionAngle;       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAthenaAIControllerSharedParamValuesDataAsset*> SharedParamValues;                                        // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideMeshScale;                              // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              IndividualMeshScale;                                      // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerHealthCustomisation      IndividualHealthCustomisationValues;                      // 0x0080(0x000C) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<struct FAthenaAIControllerParamValue>       IndividualInitialBlackboardValues;                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       IndividualNamedControllerParams;                          // 0x00A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerWeightedRangesParamValue> IndividualNamedWeightedRangesControllerParams;            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerSenseSettingOverride> IndividualAIStrategySenseSettingOverrides;                // 0x00C0(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideCurrentTargetPerceivedNotVisibleAge;    // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              IndividualCurrentTargetPerceivedNotVisibleAge;            // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FeatureName;                                              // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset
// 0x00A8 (0x0130 - 0x0088)
class UAthenaAICharacterControllerSharedParamValuesDataAsset : public UAthenaAIControllerSharedParamValuesDataAsset
{
public:
	bool                                               OverrideUseRVOAvoidance;                                  // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRVOAvoidance;                                          // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePrioritiseInteractablesBeforeEnemies;             // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PrioritiseInteractablesBeforeEnemies;                     // 0x008B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;        // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     CannonTargetingParams;                                    // 0x00B8(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;             // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                 // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                          // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                          // 0x00F8(0x0010) (Edit, ExportObject, ZeroConstructor)
	struct FStringAssetReference                       AnimationDataOverrideAsset;                               // 0x0108(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CustomAnimationAsset;                                     // 0x0118(0x0010) (Edit, ZeroConstructor)
	bool                                               OverrideNoInitialItem;                                    // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoInitialItem;                                            // 0x0129(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x012A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x00A8 (0x0188 - 0x00E0)
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	bool                                               IndividualOverrideUseRVOAvoidance;                        // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualUseRVOAvoidance;                                // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualOverridePrioritiseInteractablesBeforeEnemies;   // 0x00E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualPrioritiseInteractablesBeforeEnemies;           // 0x00E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 IndividualDistanceInMToCannonShotHitChanceCurve;          // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       IndividualAIStrategyMovementProperties;                   // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> IndividualItemCategoryAIStrategyMovementPropertiesOverrides;// 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FAthenaAICharacterCannonTargetingParams     IndividualCannonTargetingParams;                          // 0x0110(0x0010) (Edit)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> IndividualWieldedItemProjectileEffectivenessProperties;   // 0x0120(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> IndividualWieldedItemOverrideNamedControllerParams;       // 0x0130(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             IndividualNamedItemParams;                                // 0x0140(0x0010) (Edit, ZeroConstructor)
	TArray<class UAthenaAIAbilityParams*>              IndividualAIAbilityParams;                                // 0x0150(0x0010) (Edit, ExportObject, ZeroConstructor)
	struct FStringAssetReference                       IndividualAnimationDataOverrideAsset;                     // 0x0160(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       IndividualCustomAnimationAsset;                           // 0x0170(0x0010) (Edit, ZeroConstructor)
	bool                                               IndividualOverrideNoInitialItem;                          // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IndividualNoInitialItem;                                  // 0x0181(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0182(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAmmoDataAsset
// 0x00A8 (0x00D0 - 0x0028)
class UAthenaAIAmmoDataAsset : public UDataAsset
{
public:
	TArray<struct FAthenaAICharacterControllerWeightedAmmoType> AmmoWeights;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAmmoDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIAmmoRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIAmmoRankProgression : public UDataAsset
{
public:
	TArray<struct FAIAmmoRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAmmoRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIAmmoProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIAmmoProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIAmmoRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAmmoProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIAmmoTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIAmmoTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIAmmoDataAsset*>              AllAmmo;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIAmmoDataAsset*                      DefaultAmmo;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAmmoTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIAnimationStateInterface
// 0x0000 (0x0028 - 0x0028)
class UAIAnimationStateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIAnimationStateInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIClassId
// 0x0000 (0x0028 - 0x0028)
class UAIClassId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIClassId"));
		return ptr;
	}

};


// Class AthenaAI.AIClassIdTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIClassIdTypeList : public UDataAsset
{
public:
	TArray<class UClass*>                              AllClassIds;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIClassIdTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIColorVariantPool
// 0x0010 (0x0038 - 0x0028)
class UAIColorVariantPool : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               AvailableColors;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIColorVariantPool"));
		return ptr;
	}

};


// Class AthenaAI.AIDebugVisualisationComponent
// 0x0050 (0x0120 - 0x00D0)
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	TArray<struct FAIDebugVisualisationLine>           Lines;                                                    // 0x00D0(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                    // 0x00E0(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                // 0x00F0(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                  // 0x0100(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                    // 0x0110(0x0010) (Edit, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDebugVisualisationComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIDialogueStateProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDialogueStateProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDialogueStateProviderInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIDiorama
// 0x0068 (0x0510 - 0x04A8)
class AAIDiorama : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASceneDialogueCoordinator*                   SpawnedDialogueCoordinator;                               // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneDialogueData*                          DialogueData;                                             // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDioramaPawn>                      LinkedActors;                                             // 0x04C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x04D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDiorama"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaController
// 0x0078 (0x00A0 - 0x0028)
class UAIDioramaController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIDioramaDesc*                              AIDioramaDesc;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDioramaPawn>                      SpawnedDioramaPawns;                                      // 0x0038(0x0010) (ZeroConstructor)
	class AAIDiorama*                                  AIDiorama;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  Spawner;                                                  // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaController"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaDesc
// 0x0018 (0x0040 - 0x0028)
class UAIDioramaDesc : public UDataAsset
{
public:
	TArray<struct FAIDioramaRoleDesc>                  RoleList;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class USceneDialogueData*                          DialogueData;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaDesc"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaLocationSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIDioramaLocationSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaLocationSourceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIDioramaLocationSourceComponent
// 0x0020 (0x02D0 - 0x02B0)
class UAIDioramaLocationSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	TArray<struct FAIDioramaLocationSourceComponentData> DioramaRelativeLocations;                                 // 0x02B8(0x0010) (Edit, ZeroConstructor)
	float                                              DialogueTriggerRadius;                                    // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DialogueSubtitleBuffer;                                   // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIDioramaLocationSourceComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0040 (0x0068 - 0x0028)
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FTargetSkillsetProgressionPair              TargetSkillsetOverrides;                                  // 0x0048(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationRecipe"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0020 (0x0048 - 0x0028)
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList> FeatureBasedRecipeLists;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	TArray<class UAIEncounterGenerationRecipe*>        AllRecipes;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationRecipeTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategory
// 0x0040 (0x0068 - 0x0028)
class UAIPartsCategory : public UDataAsset
{
public:
	TArray<class UAIPartsDesc*>                        Parts;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate)
	int                                                NextPartsIndex;                                           // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               UseWeightedArray;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FName                                       UseWeightedArrayFeatureName;                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FWeightedProbabilityRange                   WeightedArray;                                            // 0x0048(0x0020) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsCategory"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterServiceInterface"));
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AIEncounterGenerationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIEncounterGenerationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (0x0530 - 0x04A8)
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	class UAIEncounterGenerationRecipeTypeList*        GenerationRecipes;                                        // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UAIEncounterServiceInterface> EncounterService;                                         // 0x04B8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x04C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterGenerationService"));
		return ptr;
	}

};


// Class AthenaAI.AIFormRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIFormRankProgression : public UDataAsset
{
public:
	TArray<struct FAIFormRankMapping>                  RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAIFormRankProgression*>              AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIFormTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIFormTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UAthenaAIFormDataAsset*                      DefaultForm;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFormTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAILoadoutRankProgression : public UDataAsset
{
public:
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAILoadoutRankProgression*>           AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutTypeList : public UDataAsset
{
public:
	TArray<class ULoadoutAsset*>                       AllLoadouts;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISkillsetRankProgression : public UDataAsset
{
public:
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	TArray<class UAISkillsetRankProgression*>          AllProgressions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetProgressionTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AISkillsetTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetTypeList : public UDataAsset
{
public:
	TArray<class UAthenaAIControllerParamsDataAsset*>  AllSkillsets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISkillsetTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	TArray<class UAIPartsCategory*>                    AllPartsCategories;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsCategoryTypeList"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterService
// 0x0310 (0x07B8 - 0x04A8)
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	TArray<struct FAIPartsCategoryMapping>             DefaultPartsCategories;                                   // 0x04B0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIPartsCategoryFormMapping>         FormPartsCategories;                                      // 0x04C0(0x0010) (Edit, ZeroConstructor)
	class UAIAmmoTypeList*                             Ammo;                                                     // 0x04D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIAmmoProgressionTypeList*                  AmmoProgressions;                                         // 0x04D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIFormTypeList*                             Forms;                                                    // 0x04E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIFormProgressionTypeList*                  FormProgressions;                                         // 0x04E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAILoadoutTypeList*                          Loadouts;                                                 // 0x04F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAILoadoutProgressionTypeList*               LoadoutProgressions;                                      // 0x04F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetTypeList*                         Skillsets;                                                // 0x0500(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetProgressionTypeList*              SkillsetProgressions;                                     // 0x0508(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIClassIdTypeList*                          ClassIds;                                                 // 0x0510(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIPartsCategoryTypeList*                    PartsCategories;                                          // 0x0518(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIColorVariantPool*                         TeamColors;                                               // 0x0520(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x290];                                     // 0x0528(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterService"));
		return ptr;
	}


	void RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression);
	void RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset);
	void RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout);
	void RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form);
	void RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter);
};


// Class AthenaAI.AIEncounterSettings
// 0x0048 (0x0070 - 0x0028)
class UAIEncounterSettings : public UDataAsset
{
public:
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x0028(0x0020) (Edit)
	class UClass*                                      AIClass;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TeamColor;                                                // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Skillset;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettings"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsFixed
// 0x0080 (0x00F0 - 0x0070)
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SpecificSkillset;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                  // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Form;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Ammo;                                                     // 0x00A0(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DioramaRole;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       LocalisableName;                                          // 0x00B8(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettingsFixed"));
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0040 (0x00B0 - 0x0070)
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                       // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                          // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoProgression;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIEncounterSettingsRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableOperatorInterface
// 0x0000 (0x0028 - 0x0028)
class UAIInteractableOperatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableOperatorInterface"));
		return ptr;
	}

};


// Class AthenaAI.AILoadoutInterface
// 0x0000 (0x0028 - 0x0028)
class UAILoadoutInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AILoadoutInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIManagerBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIManagerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerBlueprintFunctionLibrary"));
		return ptr;
	}


	static void AddNameplateToAI(class AActor* Actor, const class FString& DisplayName);
};


// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerServiceInterface"));
		return ptr;
	}


	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
	int GetNumOfSpawnedPawns();
};


// Class AthenaAI.AIPlayerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	TArray<struct FAITypeData>                         AITypes;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringClassReference>               AdditionalAIActors;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAITypeListDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnWaveSequence
// 0x0018 (0x0040 - 0x0028)
class UAISpawnWaveSequence : public UDataAsset
{
public:
	TArray<struct FAISpawnerWave>                      Waves;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       FeatureName;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnWaveSequence"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnWaveSequenceRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISpawnWaveSequenceRankProgression : public UDataAsset
{
public:
	TArray<struct FAISpawnWaveSequenceRankMapping>     RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnWaveSequenceRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset
// 0x0038 (0x0060 - 0x0028)
class UAIWeightedProbabilityRangeOfRangesAsset : public UDataAsset
{
public:
	struct FWeightedProbabilityRangeOfRanges           RespawnTimerRanges;                                       // 0x0028(0x0030) (Edit)
	struct FName                                       FeatureName;                                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIWeightedProbabilityRangeOfRangesRankProgression : public UDataAsset
{
public:
	TArray<struct FAIWeightedProbabilityRangeOfRangesRankMapping> RankMappings;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumberOfRanks;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression"));
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerObservedInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerObservedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerTrackerObservedInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPlayerTrackerObserverInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAISettings
// 0x0078 (0x00A0 - 0x0028)
class UAthenaAISettings : public UObject
{
public:
	struct FStringAssetReference                       AITypesAsset;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIPartIdListingAsset;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FallbackAIDifficultyRank;                                 // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNumOfSpawnedActors;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxPlayerEquivalentAIsPerRegion;                          // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxWorldAICostUnitsForWorld;                              // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AIRegionCostUnitsForPlayer;                               // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterNetRelevancy;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterRegionDensityCheckTimer;                         // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterWorldDensityCheckTimer;                          // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToPlayerToRaiseSpawnPriority;                     // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingCanSpawnRequestTime;                           // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingCanSpawnRequestTime;                           // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingLocationCheckTime;                             // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingLocationCheckTime;                             // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterAINoiseTickInterval;                             // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PeriodicAINoiseComponentTickInterval;                     // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityDormancyRange;                        // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityTickTime;                             // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaTimeOutOfPlayerProximityForDormancy;                 // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAISettings"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextId
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextId"));
		return ptr;
	}

};


// Class AthenaAI.AISpawner
// 0x0378 (0x03A0 - 0x0028)
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                // 0x0038(0x0048) (Edit)
	int                                                MaxNumOfSpawnedPawns;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                    // 0x0088(0x0010) (Edit, ZeroConstructor)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                 // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawnWaveSequenceRankProgression*         DefaultSpawnWaveProgression;                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIWeightedProbabilityRangeOfRangesRankProgression* DefaultRespawnTimerRanges;                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   FindSpawnPosQuery;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      FindSpawnPosQueryRunMode;                                 // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FName                                       SpawnLocationType;                                        // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PriorityForSpawnedPawns;                                  // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverrideSpawnType;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAISpawnType>                    OverrideSpawnType;                                        // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasSpawnerLevelEncounters;                                // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	struct FName                                       NavMeshOverride;                                          // 0x00CC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             DefaultWaveSpawnLocations;                                // 0x00D8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData05[0x1B0];                                     // 0x00E8(0x01B0) MISSED OFFSET
	class UAthenaAISettings*                           AthenaAISettings;                                         // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x100];                                     // 0x02A0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawner"));
		return ptr;
	}


	int GetNumOfSpawnRequests();
};


// Class AthenaAI.AIManagerService
// 0x0618 (0x0AC0 - 0x04A8)
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	int                                                MaxNumOfSpawnedPawns;                                     // 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA4];                                      // 0x04BC(0x00A4) MISSED OFFSET
	TArray<class UClass*>                              CachedAIClasses;                                          // 0x0560(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x330];                                     // 0x0570(0x0330) MISSED OFFSET
	TArray<class UAIPlayerTracker*>                    PlayerTrackers;                                           // 0x08A0(0x0010) (ZeroConstructor)
	TArray<struct FCustomPlayersAITrackerData>         CustomPlayersTrackerDatas;                                // 0x08B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x100];                                     // 0x08C0(0x0100) MISSED OFFSET
	TArray<class UAISpawner*>                          SpawnersPendingShutdown;                                  // 0x09C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0xA8];                                      // 0x09D0(0x00A8) MISSED OFFSET
	class UAthenaAITypeListDataAsset*                  AITypeList;                                               // 0x0A78(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISpawnContextList*                         AISpawnContextList;                                       // 0x0A80(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x38];                                      // 0x0A88(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIManagerService"));
		return ptr;
	}


	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor, TEnumAsByte<ECharacterDeathType> DeathType);
	class UAISpawner* GetRegionSpawner(const struct FName& Region, int Index);
	int GetNumOfSpawnRequests();
};


// Class AthenaAI.DebugAIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.DebugAIManagerServiceInterface"));
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
};


// Class AthenaAI.DebugAIManagerService
// 0x00A0 (0x0B60 - 0x0AC0)
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0AC0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.DebugAIManagerService"));
		return ptr;
	}


	void SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors);
	void SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion);
	void SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld);
	void SetIgnoreCharacterLimits(bool Ignore);
	void SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority);
	void SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer);
	void SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer);
	void SetCharacterNetRelevancy(float InCloseByCharactersRadius);
};


// Class AthenaAI.AIPartsService
// 0x0018 (0x0040 - 0x0028)
class UAIPartsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAIColorVariantPool*                         TeamColors;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsService"));
		return ptr;
	}

};


// Class AthenaAI.AIPartCustomizationInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartCustomizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartCustomizationInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPartIdListingAsset
// 0x0010 (0x0038 - 0x0028)
class UAIPartIdListingAsset : public UDataAsset
{
public:
	TArray<struct FName>                               AIPartIds;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartIdListingAsset"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartsRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsRetrievalInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIPartsRetrievalComponent
// 0x00A8 (0x0178 - 0x00D0)
class UAIPartsRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UAIPartsCategory*                            PartsCategory;                                            // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FReplicatedAIPartsData                      ReplicatedAIPartsData;                                    // 0x00E0(0x0018) (Net)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPartsRetrievalComponent"));
		return ptr;
	}


	void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex);
	void OnRep_ReplicatedAIPartsData();
};


// Class AthenaAI.AIPawnInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPawnInterface"));
		return ptr;
	}

};


// Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator
// 0x0038 (0x0080 - 0x0048)
class UFilterFirstPlayerEnterPlayerTrackerDecorator : public UAISpawnerPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator"));
		return ptr;
	}

};


// Class AthenaAI.AIRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAIRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIRegionInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIRegionComponent
// 0x0070 (0x0320 - 0x02B0)
class UAIRegionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	bool                                               UpdateRegionPosition;                                     // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	struct FName                                       NavMeshAgentType;                                         // 0x02BC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x02C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSpawnLocationGroup>                 SpawnLocationGroups;                                      // 0x02C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x02D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIRegionComponent"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnContextList : public UDataAsset
{
public:
	TArray<struct FAISpawnContextData>                 SpawnContextList;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextList"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnContextProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnContextProviderInterface"));
		return ptr;
	}

};


// Class AthenaAI.BountySpawnerAudioZonesInterface
// 0x0000 (0x0028 - 0x0028)
class UBountySpawnerAudioZonesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BountySpawnerAudioZonesInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIBountySpawner
// 0x0160 (0x0500 - 0x03A0)
class UAIBountySpawner : public UAISpawner
{
public:
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;         // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                               // 0x03A8(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x03B8(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x03C8(0x0020) (Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x03E8(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                          // 0x0408(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x041C(0x002C) MISSED OFFSET
	TArray<class AActor*>                              CrewMembers;                                              // 0x0448(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                   // 0x0458(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0468(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIBountySpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIFixedWavesSpawner
// 0x0028 (0x03C8 - 0x03A0)
class UAIFixedWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAICacheHealthSpawnerWave>           SpawnedWaves;                                             // 0x03A0(0x0010) (Edit, ZeroConstructor)
	int                                                NumWavesToSpawnOnSpottedNewTarget;                        // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x03B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFixedWavesSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIIncrementalWaveSpawner
// 0x0148 (0x04E8 - 0x03A0)
class UAIIncrementalWaveSpawner : public UAISpawner
{
public:
	struct FAISpawnerWave                              SpawnedWave;                                              // 0x03A0(0x0130) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIIncrementalWaveSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIInteractableSpawner
// 0x0100 (0x04A0 - 0x03A0)
class UAIInteractableSpawner : public UAISpawner
{
public:
	class UClass*                                      AIInteractableType;                                       // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InhabitedChance;                                          // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                       // 0x03B0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                           // 0x03E0(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                               // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;             // 0x0418(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                 // 0x0448(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                   // 0x0478(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RunSpawnForInteractableSimulation;                        // 0x0479(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x047A(0x0002) MISSED OFFSET
	int                                                NumIterations;                                            // 0x047C(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0480(0x0018) MISSED OFFSET
	TEnumAsByte<EPlayMode>                             CachedPlaymode;                                           // 0x0498(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0499(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIInteractableSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIOnDemandSpawner
// 0x0000 (0x03A0 - 0x03A0)
class UAIOnDemandSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIOnDemandSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIPerCrewSpawner
// 0x0120 (0x04C0 - 0x03A0)
class UAIPerCrewSpawner : public UAISpawner
{
public:
	int                                                MaxNumOfCrewsToSpawnFor;                                  // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<struct FAIPerCrewSpawnerRankBasedDelay>     RespawnTimerRangesBasedOnRank;                            // 0x03A8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x108];                                     // 0x03B8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPerCrewSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIPerPlayerSpawner
// 0x0118 (0x04B8 - 0x03A0)
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                 // 0x03A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              RadiusToCheckForExistingPopulation;                       // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExistingPopulationInRadius;                            // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                       // 0x03AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	int                                                MaxActorsTotalPerPlayer;                                  // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunSimulation;                                            // 0x03B4(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	int                                                RankForSimulation;                                        // 0x03B8(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumIterations;                                            // 0x03BC(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF8];                                      // 0x03C0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIPerPlayerSpawner"));
		return ptr;
	}


	void PlayerDeath(class AActor* Player);
	int GetNumOfPlayers();
};


// Class AthenaAI.AIBoobyTrapSpawner
// 0x00B0 (0x0568 - 0x04B8)
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	int                                                NumberOfWavesToSpawn;                                     // 0x04B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 NewWaveSpawnSfx;                                          // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewWaveSpawnSfxTriggerRadius;                             // 0x04C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class AActor*                                      ActorToTrack;                                             // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x90];                                      // 0x04D8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIBoobyTrapSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AIProgressiveWavesSpawner
// 0x0030 (0x03D0 - 0x03A0)
class UAIProgressiveWavesSpawner : public UAISpawner
{
public:
	TArray<struct FAIPersistentSpawnerWave>            Waves;                                                    // 0x03A0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET
	class AActor*                                      TriggerActor;                                             // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIProgressiveWavesSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnerSpawnInteractableAssignmentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface"));
		return ptr;
	}

};


// Class AthenaAI.AIWaveSpawner
// 0x0168 (0x0508 - 0x03A0)
class UAIWaveSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET
	struct FAISpawnerWave                              SpawnedWave;                                              // 0x03A8(0x0130) (Edit)
	float                                              MinRespawnTime;                                           // 0x04D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRespawnTime;                                           // 0x04DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x04E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIWaveSpawner"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkSpawner
// 0x0000 (0x03A0 - 0x03A0)
class UTinySharkSpawner : public UAISpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkSpawner"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnerList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnerList : public UDataAsset
{
public:
	TArray<class UAISpawner*>                          Spawners;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnerList"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (0x02B0 - 0x02B0)
class UAISpawnPointSeedComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnPointSeedComponent"));
		return ptr;
	}

};


// Class AthenaAI.AISpawnRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UAISpawnRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AISpawnRegionInterface"));
		return ptr;
	}

};


// Class AthenaAI.AITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.AITargetServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.AITargetService
// 0x0030 (0x04D8 - 0x04A8)
class AAITargetService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetService"));
		return ptr;
	}

};


// Class AthenaAI.AITargetWeaponInterface
// 0x0000 (0x0028 - 0x0028)
class UAITargetWeaponInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AITargetWeaponInterface"));
		return ptr;
	}


	bool FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig);
};


// Class AthenaAI.AquaticAITargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAquaticAITargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AquaticAITargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIAbilityHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityHandlerInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIAbilityHandlerComponent
// 0x0040 (0x0110 - 0x00D0)
class UAthenaAIAbilityHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<class UAthenaAIAbility*>                    AIAbilities;                                              // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIAbilityHandlerComponent"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (0x02D0 - 0x0298)
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              ProportionOfTurnToMove;                                   // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleToTurnOnSpot;                                     // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachedGoalMaxSpeedToSlowDistanceFactor;                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbortMoveMaxSpeedToSlowDistanceFactor;                    // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A8(0x0004) MISSED OFFSET
	float                                              MinSlowDownSpeed;                                         // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterPathFollowingComponent"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerBase
// 0x0150 (0x06E8 - 0x0598)
class AAthenaAIControllerBase : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0598(0x0008) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          ParamsDataAsset;                                          // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x05A8(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerBase"));
		return ptr;
	}


	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAIController
// 0x0220 (0x0908 - 0x06E8)
class AAthenaAIController : public AAthenaAIControllerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x06F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x06F4(0x000C) MISSED OFFSET
	class UAISenseConfig_Sight*                        SightConfig;                                              // 0x0700(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Hearing*                      HearingConfig;                                            // 0x0708(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Damage*                       DamageSenseConfig;                                        // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0718(0x0040) MISSED OFFSET
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x0758(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x178];                                     // 0x0768(0x0178) MISSED OFFSET
	class AActor*                                      CurrentNotSeenPerceivedActor;                             // 0x08E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      PendingSpawnTriggerActor;                                 // 0x08E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x08F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIController"));
		return ptr;
	}


	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAICharacterController
// 0x0198 (0x0AA0 - 0x0908)
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	class UAthenaAIItemParamsDataAsset*                ItemParamsDataAsset;                                      // 0x0908(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               FallbackLoadoutIfAllEngageItemsDropped;                   // 0x0910(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ControlRotationInterpSpeed;                               // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ControlRotationUseConstantInterp;                         // 0x091C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x091D(0x0013) MISSED OFFSET
	class UAthenaAICharacterControllerParamsDataAsset* CharacterParamsDataAsset;                                 // 0x0930(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0938(0x0090) MISSED OFFSET
	TArray<class UAthenaAIAbilityParams*>              AIAbilityParams;                                          // 0x09C8(0x0010) (ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x09D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x09E0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAICharacterController"));
		return ptr;
	}


	void SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies);
	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
	void ClearOverridePrioritiseInteractablesBeforeEnemies();
};


// Class AthenaAI.AthenaSwimmingAIController
// 0x00D8 (0x09E0 - 0x0908)
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	class USwimmingPathFollowingComponent*             SwimmingPathFollowingComponent;                           // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 DistOfAttackerVsChanceToPursue;                           // 0x0910(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               TimersToZeroIfStartingRevengeAttack;                      // 0x0918(0x0010) (Edit, ZeroConstructor)
	struct FName                                       DespawnRequiredBlackboardKey;                             // 0x0928(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DespawnRequiredReasonBlackboardKey;                       // 0x0930(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedWeight;                                      // 0x0938(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PathingFailedThresholdToDespawn;                          // 0x093C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0940(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaSwimmingAIController"));
		return ptr;
	}

};


// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (0x0168 - 0x00E0)
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	struct FWeightedProbabilityRange                   Courage;                                                  // 0x00E0(0x0020) (Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                               // 0x0100(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                               // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                      // 0x0118(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                       // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreat;                                             // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                     // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                     // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMin;                                  // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMax;                                  // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationDurationVariance;                                // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlertThreshold;                                           // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FleeThreshold;                                            // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeCalm;                                         // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CalmCooldownTime;                                         // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromLeaderForIdle;                             // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                        // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaAIContollerParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (0x0040 - 0x0028)
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIControllerParamsDataProvider"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAthenaAIDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIDebugFunctionLibrary"));
		return ptr;
	}


	static void SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, class UClass* ClassId, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay);
	static void SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh);
	static void SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	static int GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	static void EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams);
	static void EnableBehaviorTreeLogging(class UObject* WorldContext);
	static void DespawnAIPawn(class APawn* Pawn);
	static struct FVector CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
};


// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (0x01D0 - 0x01D0)
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIPerceptionComponent"));
		return ptr;
	}


	bool IsPerceptionSenseEnabled(class UClass* Sense);
	bool IsAnyPerceptionEnabled();
	void EnablePerceptionSense(class UClass* Sense, bool Enable);
	void EnableAllPerception(bool Enable);
};


// Class AthenaAI.AthenaAISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAISightTargetInterface : public UAISightTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAISightTargetInterface"));
		return ptr;
	}

};


// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (0x0060 - 0x0028)
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           WeightedRangesValue;                                      // 0x0030(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaAIWeightedRangesDataProvider"));
		return ptr;
	}

};


// Class AthenaAI.BlackboardAIDataProvider
// 0x0018 (0x0040 - 0x0028)
class UBlackboardAIDataProvider : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BlackboardAIDataProvider"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (0x0088 - 0x0068)
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UClass*                                      StateId;                                                  // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ActionState"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	bool                                               ReverseLogic;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ActorInWater"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CurrentAIStrategy
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_CurrentAIStrategy : public UBTDecorator_BaseConditional
{
public:
	TArray<class UClass*>                              Strategies;                                               // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CurrentAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetOnShip
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TargetOnShip : public UBTDecorator_BaseConditional
{
public:
	bool                                               Invert;                                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBT_ShipOwnership>                     ShipOwnership;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TargetOnShip"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0028 (0x00B8 - 0x0090)
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Class;                                                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Invert;                                                   // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class FString                                      CachedDescription;                                        // 0x00A0(0x0010) (ZeroConstructor)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardClassValue"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (0x0080 - 0x0068)
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBlackboardValueCompositeType>         FloatConditionComposite;                                  // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardValues"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (0x00B8 - 0x0080)
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	TEnumAsByte<EFloatValueComparisonType>             Comparison;                                               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Value;                                                    // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareFloatValueBase"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardActorSpeed : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x00B8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareCurrentHealth
// 0x0000 (0x00B8 - 0x00B8)
class UBTDecorator_CompareCurrentHealth : public UBTDecorator_CompareFloatValueBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_CompareCurrentHealth"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (0x0108 - 0x0080)
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (Edit)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TargetInRange"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRangeOfPoint
// 0x0028 (0x0130 - 0x0108)
class UBTDecorator_TargetInRangeOfPoint : public UBTDecorator_TargetInRange
{
public:
	struct FBlackboardKeySelector                      ReferencePointKey;                                        // 0x0108(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TargetInRangeOfPoint"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (0x00E8 - 0x0080)
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x0080(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x00B0(0x0030) (Edit)
	bool                                               TestForOutsideRange;                                      // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TestRange"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRangeOfSeenActors
// 0x0010 (0x00F8 - 0x00E8)
class UBTDecorator_TestRangeOfSeenActors : public UBTDecorator_TestRange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TestRangeOfSeenActors"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ConeCheck3D"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_DockedToInteractable
// 0x0000 (0x0090 - 0x0090)
class UBTDecorator_DockedToInteractable : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_DockedToInteractable"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	struct FName                                       FeatureName;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_FeatureToggle"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_ItemReadyToUse : public UBTDecorator
{
public:
	class UClass*                                      NotificationId;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_ItemReadyToUse"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BlackboardBase
{
public:
	float                                              Interval;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_LineOfSightToTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	float                                              DistanceFromSurface;                                      // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_NearSurfaceOfWater"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x0068(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_RandomDiceRoll"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	int                                                MinNumLoops;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumLoops;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RandomNumLoopCurve;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_RandomLoop"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RollAgainstPatrolChance
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_RollAgainstPatrolChance : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_RollAgainstPatrolChance"));
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestAIInteractableType
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_TestAIInteractableType : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      Type;                                                     // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTDecorator_TestAIInteractableType"));
		return ptr;
	}

};


// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (0x00E8 - 0x0070)
class UBTService_AimAIInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00C0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_AimAIInteractable"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DetermineAIAbility
// 0x0000 (0x0070 - 0x0070)
class UBTService_DetermineAIAbility : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DetermineAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableCollisions
// 0x0010 (0x0080 - 0x0070)
class UBTService_DisableCollisions : public UBTService
{
public:
	TArray<TEnumAsByte<ECollisionChannel>>             ChannelsToLeaveUnaffected;                                // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DisableCollisions"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableDamageResponses
// 0x0000 (0x0070 - 0x0070)
class UBTService_DisableDamageResponses : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DisableDamageResponses"));
		return ptr;
	}

};


// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0008 (0x00A0 - 0x0098)
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_EnableFaceFocusActor"));
		return ptr;
	}

};


// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (0x00A0 - 0x0098)
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	float                                              TimeMultiplier;                                           // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch"));
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryPerceptionForTarget
// 0x0000 (0x0070 - 0x0070)
class UBTService_QueryPerceptionForTarget : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_QueryPerceptionForTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryShipsForTarget
// 0x0290 (0x0300 - 0x0070)
class UBTService_QueryShipsForTarget : public UBTService
{
public:
	struct FAIDataProviderFloatValue                   MaxShipDistanceFromHomePosition;                          // 0x0070(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinDamageToSwitchTargets;                                 // 0x00A0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinSecondsBeforeSwitchTargets;                            // 0x00D0(0x0030) (Edit)
	struct FAIDataProviderBoolValue                    SwitchTargetsAfterTimerExpires;                           // 0x0100(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   SecondsBeforeSwitchTargetsAfterTimerExpires;              // 0x0130(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   TimeBetweenDiceRolls;                                     // 0x0160(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForAggression;                                    // 0x0190(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MinTotalDamageToTurnDiceRollForAggression;                // 0x01C0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForDamageAggression;                              // 0x01F0(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   DiceRollForDamageDormancy;                                // 0x0220(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   PlayerDistanceThresholdToTurnAggressive;                  // 0x0250(0x0030) (Edit)
	bool                                               IgnoreAI;                                                 // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7F];                                      // 0x0281(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_QueryShipsForTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQuery
// 0x0050 (0x00E8 - 0x0098)
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	bool                                               OverrideQueryTemplateWithBlackboardValue;                 // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      OverrideEQSKey;                                           // 0x00A0(0x0028) (Edit)
	class UEnvQuery*                                   QueryTemplate;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_RunEQSQuery"));
		return ptr;
	}

};


// Class AthenaAI.BTService_DoesEQSQuerySucceed
// 0x0000 (0x00E8 - 0x00E8)
class UBTService_DoesEQSQuerySucceed : public UBTService_RunEQSQuery
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_DoesEQSQuerySucceed"));
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0040 (0x0128 - 0x00E8)
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	struct FBlackboardKeySelector                      MovingActorKey;                                           // 0x00E8(0x0028) (Edit)
	float                                              MinimumActorMovementToRunEQS;                             // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumActorVelocityChangeToRunEQS;                       // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RunEQSForYawChanges;                                      // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              MinimumActorYawChangeToRunEQS;                            // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_RunEQSQueryOnActorMovement"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIAnimationState
// 0x0000 (0x0098 - 0x0098)
class UBTService_SetAIAnimationState : public UBTService_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetAIAnimationState"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (0x0078 - 0x0070)
class UBTService_SetAIStrategy : public UBTService
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant
// 0x0028 (0x0098 - 0x0070)
class UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                             // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant
// 0x0028 (0x0098 - 0x0070)
class UBTService_SetBoolBlackboardValueTrueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      BoolValueKey;                                             // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant
// 0x0030 (0x00A0 - 0x0070)
class UBTService_SetNameBlackboardValueWhileRelevant : public UBTService
{
public:
	struct FBlackboardKeySelector                      NameValueKey;                                             // 0x0070(0x0028) (Edit)
	struct FName                                       Value;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant"));
		return ptr;
	}

};


// Class AthenaAI.BTService_TriggerNotifications
// 0x0020 (0x0090 - 0x0070)
class UBTService_TriggerNotifications : public UBTService
{
public:
	class UClass*                                      EnterBranchNotificationId;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeaveBranchNotificationId;                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_TriggerNotifications"));
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (0x00C0 - 0x0070)
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTService_UpdateTargetForInteractable"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	bool                                               ShouldFailBeforeSlowDown;                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              ExitBeforeSlowDownDistanceTolerance;                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldOverrideMaxSpeedToSlow;                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainFacingBeforeMove;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_AthenaMoveTo"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (0x00C0 - 0x00B8)
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	bool                                               FailOnDistanceBeingLess;                                  // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              FailDistance;                                             // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceChange"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors
// 0x0010 (0x00D0 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToSeenActors : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (0x00E8 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00C0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (0x00C8 - 0x00B8)
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	float                                              MinimumLocationMovementForRePath;                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumTimeBeforeRePath;                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsContinuous;                                             // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToMovingLocation"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWait
// 0x0060 (0x00C0 - 0x0060)
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	struct FAIDataProviderFloatValue                   Min;                                                      // 0x0060(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   Max;                                                      // 0x0090(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_AthenaWait"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearBlackboardValue
// 0x0000 (0x0088 - 0x0088)
class UBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ClearBlackboardValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ClearPerceptualData
// 0x0000 (0x0060 - 0x0060)
class UBTTask_ClearPerceptualData : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ClearPerceptualData"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_CopyAIInteractionPointAndFocusToBlackboard : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SourceInteractable;                                       // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionPosition;                                      // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      InteractionFocusPosition;                                 // 0x00B0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_CopyBlackboardActor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardVector
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardVector : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_CopyBlackboardVector"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_DetermineFollowUpAIAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_DetermineFollowUpAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityTypeToFollowUp;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_DetermineFollowUpAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_ExecuteAIAbility
// 0x0008 (0x0068 - 0x0060)
class UBTTask_ExecuteAIAbility : public UBTTaskNode
{
public:
	class UClass*                                      AIAbilityType;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_ExecuteAIAbility"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (0x0090 - 0x0088)
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	float                                              TimeToForget;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_IgnoreActorTemporarily"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_InteractWith
// 0x0008 (0x0090 - 0x0088)
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	class UClass*                                      NotificationId;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_InteractWith"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	float                                              MaxDistFromDestinationPosToTargetPos;                     // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x00A8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_MoveToTarget"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_NetworkTriggerAnim
// 0x0010 (0x0070 - 0x0060)
class UBTTask_NetworkTriggerAnim : public UBTTaskNode
{
public:
	class UAnimSequence*                               Anim;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimLength;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_NetworkTriggerAnim"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_NOP
// 0x0008 (0x0068 - 0x0060)
class UBTTask_NOP : public UBTTaskNode
{
public:
	int                                                Id;                                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_NOP"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (0x0070 - 0x0060)
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	class UObject*                                     MontageToPlay;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_PlayMontage"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_RequestDespawn
// 0x0000 (0x0060 - 0x0060)
class UBTTask_RequestDespawn : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_RequestDespawn"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	class UClass*                                      NewStrategy;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetAIStrategy"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray
// 0x0010 (0x0070 - 0x0060)
class UBTTask_SetAIStrategyFromWeightedArray : public UBTTaskNode
{
public:
	TArray<struct FWeightedAIStrategyChance>           WeightedStrategies;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	class AActor*                                      Actor;                                                    // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardActor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	bool                                               NewValue;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardBoolValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   EQS;                                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardEQSValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   FloatValue;                                               // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValue"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (0x00E8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   MinValue;                                                 // 0x0088(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MaxValue;                                                 // 0x00B8(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromWeightedArray : public UBTTask_BlackboardBase
{
public:
	struct FAIDataProviderStructValue                  WeightedArrayFromParams;                                  // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      Interactable;                                             // 0x0060(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x0088(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x00B0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_StopMovementImmediately
// 0x0000 (0x0060 - 0x0060)
class UBTTask_StopMovementImmediately : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_StopMovementImmediately"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_StorePawnLocationInBlackboard
// 0x0000 (0x0088 - 0x0088)
class UBTTask_StorePawnLocationInBlackboard : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_StorePawnLocationInBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (0x00E0 - 0x0088)
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	float                                              DamageToApply;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00A8(0x0030) (Edit)
	float                                              MaxDistanceToTargetToApplyDamage;                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimAttackTargetActor"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetShip
// 0x0198 (0x0220 - 0x0088)
class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
{
public:
	float                                              BiteRadiusOffsetToBeginAttackHeadOn;                      // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BiteRadiusOffsetToBeginAttackPerpendicular;               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeToStartAttack;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UAnimSequence*                               AttackAnim;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAnimLength;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPerformAttack;                                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AttackVFX;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackVFXZOffset;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoSTraceProfileName;                                      // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x00C0(0x0030) (Edit)
	TArray<struct FSwimAttackTargetShipImpulseData>    ImpulseData;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
	struct FAIDataProviderIntValue                     MinDamageHolesToApply;                                    // 0x0100(0x0030) (Edit)
	struct FAIDataProviderIntValue                     MaxDamageHolesToApply;                                    // 0x0130(0x0030) (Edit)
	int                                                LevelsOfHullDamage;                                       // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class UClass*                                      DamageCauserType;                                         // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   PlayerBiteRadius;                                         // 0x0170(0x0030) (Edit)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x01A0(0x0034) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   PlayerBiteDamage;                                         // 0x01D8(0x0030) (Edit)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	class AShip*                                       TargetShip;                                               // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimAttackTargetShip"));
		return ptr;
	}

};


// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0118 (0x01E8 - 0x00D0)
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	float                                              DirectSwimmingDotToTarget;                                // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArcToTargetDotToTarget;                                   // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetPitchFactor;                                     // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                      // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                   // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchBezierControlPointsLengthFactor;                     // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LineOfSightCollisionProfile;                              // 0x00EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightSphereCastRadius;                              // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightCheckInterval;                                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInNewPath;                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInRePath;                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugOnServer;                                        // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionTypesToDoPathUpdate;                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                        // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0120(0x0058) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0180(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.SwimmingPathFollowingComponent"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTo
// 0x0040 (0x00C8 - 0x0088)
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingGoalCheckMode>                GoalCheckMode;                                            // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingArcMode>                      ArcMode;                                                  // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Abort3DSwimIfCresting;                                    // 0x008E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	float                                              TargetActorZOffset;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingSyncMode>                     SwimSyncMode;                                             // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackTargetActor;                                         // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                    // 0x0098(0x0028) (Edit)
	TEnumAsByte<ESwimmingLineOfSightTest>              LineOfSightTestMode;                                      // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimTo"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	float                                              MaxTurnSpringAccel;                                       // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilMaxTurnSpringAccel;                              // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleDeltaToAcceptFinalRotation;                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_SwimTurnOnTheSpot"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_TeleportTo
// 0x0000 (0x0088 - 0x0088)
class UBTTask_TeleportTo : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_TeleportTo"));
		return ptr;
	}

};


// Class AthenaAI.BTTask_TriggerNotification
// 0x0008 (0x0068 - 0x0060)
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	class UClass*                                      NotificationId;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.BTTask_TriggerNotification"));
		return ptr;
	}

};


// Class AthenaAI.CustomSkeletonAnimationDataList
// 0x0010 (0x0038 - 0x0028)
class UCustomSkeletonAnimationDataList : public UDataAsset
{
public:
	TArray<struct FStringAssetReference>               CustomAnimationAssets;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.CustomSkeletonAnimationDataList"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_PositionFromBlackboard
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_PositionFromBlackboard : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_PositionFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_ContextLocationFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_HomePositionFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryContext_KnockbackPosFromBlackboard : public UEnvQueryContext_PositionFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SeenActors
// 0x0010 (0x0038 - 0x0028)
class UEnvQueryContext_SeenActors : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_SeenActors"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_SpawnedForActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromBlackboardPredictedLocation : public UEnvQueryContext_TargetActorFromBlackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_TargetActorFromParams
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetActorFromParams : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_TargetActorFromParams"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_AIRegionLocations
// 0x0010 (0x0058 - 0x0048)
class UEnvQueryGenerator_AIRegionLocations : public UEnvQueryGenerator
{
public:
	bool                                               UseOverrideSpawnType;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FName                                       OverrideSpawnType;                                        // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_AIRegionLocations"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_Line
// 0x00A8 (0x0130 - 0x0088)
class UEnvQueryGenerator_Line : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      FromContext;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ToContext;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   PointSpacing;                                             // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumExtraPairsOfParallelLines;                             // 0x00C8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ParallelLineSpacing;                                      // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	bool                                               ForceIncludeEndPoint;                                     // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectPointsToWaterSurface;                              // 0x0129(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x012A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_Line"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (0x0090 - 0x0088)
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class UClass*                                      Context;                                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_PointsAtContext"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0150 (0x01D8 - 0x0088)
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00E8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0118(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0148(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0168(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                        // 0x0198(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01D0(0x0001)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                          // 0x01D0(0x0001) (Edit)
	unsigned char                                      ApplyZOffsetToProjectPoints : 1;                          // 0x01D0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_WaterDonut"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (0x0100 - 0x0088)
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   Radius;                                                   // 0x0088(0x0030) (Edit, DisableEditOnInstance)
	TArray<struct FAIDataProviderFloatValue>           ZOffsetOfRingsFromContext;                                // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x00C8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	TEnumAsByte<ETraceDirection>                       TraceDirection;                                           // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_HasLineOfSight"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (0x0210 - 0x0170)
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x0170(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                          // 0x01B0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                          // 0x01E0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_IsAngleInRange2D"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_WaterHeight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_WaterHeight : public UEnvQueryTest
{
public:
	float                                              WaterHeightCheckOffset;                                   // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	class UClass*                                      ActorWithWaterPlaneContext;                               // 0x0178(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryTest_WaterHeight"));
		return ptr;
	}

};


// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0048 (0x0118 - 0x00D0)
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	struct FName                                       NoiseTag;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoiseRangeBasedOnMovementSpeed;                           // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              ConstantNoiseRange;                                       // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PeriodicAINoiseEventComponent"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkTelemetryComponent
// 0x00C0 (0x0190 - 0x00D0)
class UTinySharkTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00D0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkTelemetryComponent"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkExperience
// 0x0398 (0x0840 - 0x04A8)
class ATinySharkExperience : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	float                                              RelevancyDistance;                                        // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackingMovementCheckInterval;                            // 0x04B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEnvQuery*                                   TrackingMovementValidQuery;                               // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x04C0(0x0088) MISSED OFFSET
	class UTinySharkSpawner*                           TinySharkSpawner;                                         // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ASharkPawn*                                  TinySharkPawn;                                            // 0x0550(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FTinySharkParams                            Params;                                                   // 0x0560(0x00B8) (Transient)
	class UTinySharkTelemetryComponent*                TinySharkTelemetryComponent;                              // 0x0618(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AShip*                                       TrackedShip;                                              // 0x0620(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x98];                                      // 0x0628(0x0098) MISSED OFFSET
	struct FEncounterParams                            SightingEncounterParams;                                  // 0x06C0(0x000C) (Edit, DisableEditOnInstance)
	struct FEncounterParams                            CloseEncounterParams;                                     // 0x06CC(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x140];                                     // 0x06D8(0x0140) MISSED OFFSET
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> CachedControllerParamsAsset;                              // 0x0818(0x0020)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0838(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkExperience"));
		return ptr;
	}


	void TinySharkPawnDestroyed(class AActor* InDestroyedActor);
	class AShip* GetTrackedShip();
	TEnumAsByte<ETinySharkState> GetCurrentState();
	TEnumAsByte<ETinySharkActiveState> GetActiveState();
};


// Class AthenaAI.TinySharkParamsDataAsset
// 0x00B8 (0x00E0 - 0x0028)
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkParams                            Params;                                                   // 0x0028(0x00B8) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTinySharkServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkServiceInterface"));
		return ptr;
	}

};


// Class AthenaAI.TinySharkService
// 0x01A8 (0x0650 - 0x04A8)
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	class UTinySharkServiceParamsDataAsset*            TinySharkServiceParams;                                   // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	TArray<class ATinySharkExperience*>                TinySharkExperiences;                                     // 0x04C8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x178];                                     // 0x04D8(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkService"));
		return ptr;
	}


	bool RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex);
	bool RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex);
	void DismissAllTinySharks();
	bool CanSpawnTinySharkExperience();
};


// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0030 (0x0058 - 0x0028)
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	struct FTinySharkServiceParams                     Params;                                                   // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	int                                                MaxNumTinySharkExperiences;                               // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.TinySharkServiceParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.VulnerabilityDuringAIStrategyComponent
// 0x0088 (0x0158 - 0x00D0)
class UVulnerabilityDuringAIStrategyComponent : public UActorComponent
{
public:
	TArray<struct FAIStrategyVulnerabilityData>        StrategyVulnerabilities;                                  // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UHealthComponent*                            HealthComponent;                                          // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00E8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.VulnerabilityDuringAIStrategyComponent"));
		return ptr;
	}

};


// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (0x04B0 - 0x04A8)
class AWaterbasedAISupplier : public AActor
{
public:
	class UAISpawnerList*                              Spawners;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.WaterbasedAISupplier"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacterMovementComponent
// 0x00A0 (0x05F0 - 0x0550)
class UAICreatureCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	float                                              BlendSpeed;                                               // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateDisturbance;                                       // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	float                                              DisturbanceSize;                                          // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisturbanceVelocityScale;                                 // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientationBlendSpeed;                                    // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientationMaxPitch;                                      // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateOrientationFrequency;                               // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7C];                                      // 0x0574(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacterMovementComponent"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacter
// 0x0200 (0x08B0 - 0x06B0)
class AAICreatureCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x06B0(0x0048) MISSED OFFSET
	float                                              DelayBeforeDestroying;                                    // 0x06F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeforeFadingOut;                                      // 0x06FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PickupTime;                                               // 0x0700(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TooltipDisplayOffset;                                     // 0x0704(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UActionStateMachineComponent*                ActionStateMachineComponent;                              // 0x0710(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionStatePriorityTableData*               ActionStatePriorityTableData;                             // 0x0718(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionStateCreatorDefinition;                             // 0x0720(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParams;                                       // 0x0728(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0730(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWaterHeightProviderComponent*               WaterHeightProviderComponent;                             // 0x0738(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitterComponent;                          // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URewindComponent*                            RewindComponent;                                          // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActionRulesComponent*                       ActionRulesComponent;                                     // 0x0750(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x100];                                     // 0x0758(0x0100) MISSED OFFSET
	class UAICreatureCharacterMovementComponent*       AICreatureCharacterMovementComponent;                     // 0x0858(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      CurrentAIStrategy;                                        // 0x0860(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0868(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacter"));
		return ptr;
	}


	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void Multicast_DespawnRPC();
	class UClass* GetAIStrategy();
};


// Class AthenaAI.Fauna
// 0x0310 (0x0BC0 - 0x08B0)
class AFauna : public AAICreatureCharacter
{
public:
	struct FText                                       DisplayName;                                              // 0x08B0(0x0038) (Edit, DisableEditOnInstance)
	class UClass*                                      FaunaSpecies;                                             // 0x08E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FaunaBreed;                                               // 0x08F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadOffset;                                               // 0x08F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MountedScale;                                             // 0x0904(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearToSurfaceDistance;                                    // 0x0910(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDrowningTimePercentage;                              // 0x0914(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMin;                                     // 0x0918(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrowningDeathTimeMax;                                     // 0x091C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentageStarvedToChangeAnimation;                       // 0x0920(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UObject*                                     HitImpactParticleSystem;                                  // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     DeathParticleSystem;                                      // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     PutInCrateParticleSystem;                                 // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PutInCrateSoundCue;                                       // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TookDamageSoundCue;                                       // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AgitationStartedSoundCue;                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AgitationStoppedSoundCue;                                 // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CalmStartedSoundCue;                                      // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CalmStoppedSoundCue;                                      // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     BreathBubblesParticleSystem;                              // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BreathBubblesSocketName;                                  // 0x0978(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UnderwaterRTPCName;                                       // 0x0980(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        OnFeedingForceFeedbackEffect;                             // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x0990(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x0998(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDamageableComponent*                        DamageableComponent;                                      // 0x09A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AttackHitVolume;                                          // 0x09A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFaunaAnimationData*                         Animations;                                               // 0x09B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDitherComponent*                            DitherComponent;                                          // 0x09B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStatusEffectComponent*                      StatusEffectComponent;                                    // 0x09C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAthenaAIControllerParamsDataAsset*          AIControllerParamsWhenInCrate;                            // 0x09C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomAnimationSeed;                                      // 0x09D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class UPeriodicAINoiseEventComponent*              PeriodicAINoiseEventComponent;                            // 0x09D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    FaunaAgitationResponseDelegate;                           // 0x09E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FaunaDirectedAgitationResponseDelegate;                   // 0x09F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                AgitationResponseChance;                                  // 0x0A00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMin;                        // 0x0A04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AgitationResponseTestFrequencyMax;                        // 0x0A08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumFailedAgitationResponseTests;                       // 0x0A0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseVFXDelay;                                // 0x0A10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgitationResponseRange;                                   // 0x0A14(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     AgitationResponseParticleSystem;                          // 0x0A18(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationResponseRangeParticleSystemAngle;                // 0x0A20(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     AgitationCollisionChannel;                                // 0x0A24(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenAgitated;                                 // 0x0A25(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A26(0x0002) MISSED OFFSET
	float                                              ApproximateSpitTravelTime;                                // 0x0A28(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopMovementWhenCalm;                                     // 0x0A2C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A2D(0x0003) MISSED OFFSET
	float                                              TurningSpringAcceleration;                                // 0x0A30(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningSpringMaxVelocity;                                 // 0x0A34(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnResetDelay;                                           // 0x0A38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PivotPointOffset;                                         // 0x0A3C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTurn;                                               // 0x0A48(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class UFeedingComponent*                           FeedingComponent;                                         // 0x0A50(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UFaunaMovementComponent*                     FaunaMovementComponent;                                   // 0x0A58(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              TimeUntilDrowned;                                         // 0x0A60(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0A64(0x000C) MISSED OFFSET
	bool                                               Drowned;                                                  // 0x0A70(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0A71(0x0002) MISSED OFFSET
	TEnumAsByte<EFaunaCratedState>                     CratedState;                                              // 0x0A73(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFaunaInWaterState>                    InWaterState;                                             // 0x0A74(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A75(0x0003) MISSED OFFSET
	class AActor*                                      Crate;                                                    // 0x0A78(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BreathBubblesParticleSystemComponent;                     // 0x0A80(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DrowningDeathTime;                                        // 0x0A88(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingStarvingAnim;                                    // 0x0A8C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAgitated;                                               // 0x0A8D(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsCalm;                                                   // 0x0A8E(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0A8F(0x0001) MISSED OFFSET
	float                                              TargetTurnAngle;                                          // 0x0A90(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x124];                                     // 0x0A94(0x0124) MISSED OFFSET
	class UVenomComponent*                             VenomComponent;                                           // 0x0BB8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.Fauna"));
		return ptr;
	}


	void TestingSetWaterState(TEnumAsByte<EFaunaInWaterState> NewInState);
	void OnRep_TargetTurnAngle();
	void OnRep_IsPlayingStarvingAnim();
	void OnRep_IsCalm();
	void OnRep_IsAgitated();
	void OnRep_InWaterState();
	void OnRep_CratedState(TEnumAsByte<EFaunaCratedState> PreviousCratedState);
	void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
	void Multicast_JustBeenFedRPC(class AActor* FedBy);
	void Multicast_HightlightLeader(bool bIsLeader);
	void GenerateNewRandomAnimationSeed();
	void ActivateResponseRPC(float InTargetTurnAngle);
};


// Class AthenaAI.PetMemoryInterface
// 0x0000 (0x0028 - 0x0028)
class UPetMemoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetMemoryInterface"));
		return ptr;
	}

};


// Class AthenaAI.PetMovementModifierInterface
// 0x0000 (0x0028 - 0x0028)
class UPetMovementModifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetMovementModifierInterface"));
		return ptr;
	}

};


// Class AthenaAI.PlayerPetInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerPetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PlayerPetInterface"));
		return ptr;
	}

};


// Class AthenaAI.Pet
// 0x0280 (0x0B30 - 0x08B0)
class APet : public AAICreatureCharacter
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x08B0(0x0050) MISSED OFFSET
	class UPetWieldableReactMappingsDataAsset*         WieldableReactMappingsAsset;                              // 0x0900(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVelocityForLocomotionAnimation;                        // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFly;                                                   // 0x090C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	TArray<struct FPetFlyingStrategyProperties>        FlyingStrategyProperties;                                 // 0x0910(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              FlyingLandTime;                                           // 0x0920(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FlyingLandCurve;                                          // 0x0928(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingTakeOffTime;                                        // 0x0930(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FlyingTakeOffCurve;                                       // 0x0938(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 MidFlightAdjustmentTimerRange;                            // 0x0940(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MidFlightAdjustmentCurve;                                 // 0x0950(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MidFlightTimeToDistanceAdjustmentCurve;                   // 0x0958(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FiredFromActorCollision;                                  // 0x0960(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 FiredFromActorSFX;                                        // 0x0968(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPetDitherComponent*                         DitherComponent;                                          // 0x0970(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinimumDamageForHealthReact;                              // 0x0978(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDebugPetStateDescriptor>              DebugStateDescriptor;                                     // 0x097C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	class UAINameplateComponent*                       AINameplateComponent;                                     // 0x0980(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFeedingComponent*                           FeedingComponent;                                         // 0x0988(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FPetMovementRequest                         ReplicatedMovementRequest;                                // 0x0990(0x000C) (Net)
	float                                              TargetMeshRoll;                                           // 0x099C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x09A0(0x0010) MISSED OFFSET
	float                                              DefaultShipTurnRateModifier;                              // 0x09B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	TArray<struct FPetTurnRateModifier>                TurnRateModifierList;                                     // 0x09B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxRollAngle;                                             // 0x09C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x09D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x09D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ULightweightStatusEffectManagerComponent*    LightweightStatusEffectManagerComponent;                  // 0x09E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetSicknessComponent*                       SicknessComponent;                                        // 0x09E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterExposureComponent*                     WaterExposureComponent;                                   // 0x09F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnedForShip;                                           // 0x09F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PetOwner;                                                 // 0x0A00(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x0A08(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class AItemInfo*                                   PetInfo;                                                  // 0x0A18(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FDocker                                     Docker;                                                   // 0x0A20(0x0050) (Edit, DisableEditOnInstance)
	struct FStartPickupObjectActionRuleParams          StartPickupObjectActionRuleParams;                        // 0x0A70(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0A80(0x0010) MISSED OFFSET
	class UParticleSystemComponent*                    CurrentlyPlayingParticleSystem;                           // 0x0A90(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              DefaultRollLerpTime;                                      // 0x0A98(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingRollLerpTime;                                      // 0x0A9C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeingDismissed;                                         // 0x0AA0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8F];                                      // 0x0AA1(0x008F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.Pet"));
		return ptr;
	}


	void SetExitTakeOffFlag(bool InExitTakeOffFlag);
	void OnShipDestroyed(class AActor* InShip);
	void OnRep_RollRequest();
	void OnRep_MovementRequest();
	void OnOwnerDestroyed(class AActor* InOwner);
	void Multicast_DitherOut();
	void Multicast_DitherIn();
	float GetFloorMeshOffsetZ();
};


// Class AthenaAI.FaunaMovementComponent
// 0x0000 (0x05F0 - 0x05F0)
class UFaunaMovementComponent : public UAICreatureCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaMovementComponent"));
		return ptr;
	}

};


// Class AthenaAI.AICreatureCharacterPathFollowingComponent
// 0x0010 (0x02E0 - 0x02D0)
class UAICreatureCharacterPathFollowingComponent : public UAthenaAICharacterPathFollowingComponent
{
public:
	float                                              LandingAngle;                                             // 0x02D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumLandTime;                                          // 0x02D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AICreatureCharacterPathFollowingComponent"));
		return ptr;
	}

};


// Class AthenaAI.AIFaunaSpawner
// 0x0178 (0x0518 - 0x03A0)
class UAIFaunaSpawner : public UAISpawner
{
public:
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                // 0x03A0(0x0140) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET
	class AActor*                                      FaunaLeader;                                              // 0x04F0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04F8(0x0010) MISSED OFFSET
	TArray<class AActor*>                              PlayersInSpawnArea;                                       // 0x0508(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AIFaunaSpawner"));
		return ptr;
	}


	void SpawnFaunaGroup();
};


// Class AthenaAI.AthenaFaunaAIController
// 0x0198 (0x0AA0 - 0x0908)
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	float                                              MaxTimeBetweenThreatDetermination;                        // 0x0908(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultControlRotationInterpSpeed;                        // 0x090C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAIStategyControllerMovementMod>     StrategyControllerMovementMods;                           // 0x0910(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              MinAgentHalfHeightPctOverride;                            // 0x0920(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0924(0x000C) MISSED OFFSET
	class AActor*                                      CarrierActor;                                             // 0x0930(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0938(0x00A8) MISSED OFFSET
	class AActor*                                      HighestDangerActor;                                       // 0x09E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x09E8(0x0088) MISSED OFFSET
	class UFaunaAIPlayerTracker*                       PlayerTracker;                                            // 0x0A70(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0A78(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.AthenaFaunaAIController"));
		return ptr;
	}


	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard"));
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_Threat
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Threat : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.EnvQueryContext_Threat"));
		return ptr;
	}

};


// Class AthenaAI.FaunaAIPlayerTracker
// 0x0020 (0x0048 - 0x0028)
class UFaunaAIPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.FaunaAIPlayerTracker"));
		return ptr;
	}

};


// Class AthenaAI.PetDitherComponent
// 0x0070 (0x01D8 - 0x0168)
class UPetDitherComponent : public UDitherComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0168(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetDitherComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetMovementParamsDataAsset
// 0x0008 (0x0030 - 0x0028)
class UPetMovementParamsDataAsset : public UDataAsset
{
public:
	bool                                               UseTighterTurningCircle;                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseHighResNavMesh;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetMovementParamsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.PetPartCustomisationInterface
// 0x0000 (0x0028 - 0x0028)
class UPetPartCustomisationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetPartCustomisationInterface"));
		return ptr;
	}

};


// Class AthenaAI.PetPartCustomisationComponent
// 0x00E0 (0x01B0 - 0x00D0)
class UPetPartCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	class UPetPartSizeMappingsDataAsset*               SizeMappingsAsset;                                        // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FPetLoadedMaterial>                  CurrentlyLoadedMaterials;                                 // 0x00E8(0x0010) (ZeroConstructor, Transient)
	class USkeletalMesh*                               CurrentlyLoadedMesh;                                      // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPetSize>                              CurrentPetSize;                                           // 0x0100(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xAF];                                      // 0x0101(0x00AF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetPartCustomisationComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetPartSizeMappingsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetPartSizeMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetPartSizeMapping>                 Mappings;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetPartSizeMappingsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.PetSicknessComponent
// 0x0010 (0x00E0 - 0x00D0)
class UPetSicknessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetSicknessComponent"));
		return ptr;
	}

};


// Class AthenaAI.PetsPartsDesc
// 0x0028 (0x0058 - 0x0030)
class UPetsPartsDesc : public UAIPartsDesc
{
public:
	struct FStringAssetReference                       Mesh;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPetMaterialEntry>                   PetMaterials;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPetSize>                              PetSize;                                                  // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetsPartsDesc"));
		return ptr;
	}

};


// Class AthenaAI.PetWieldableReactMappingsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPetWieldableReactMappingsDataAsset : public UDataAsset
{
public:
	TArray<struct FPetWieldableReactMapping>           WieldableReactMappings;                                   // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PetWieldableReactMappingsDataAsset"));
		return ptr;
	}

};


// Class AthenaAI.PreviewPet
// 0x00D8 (0x0580 - 0x04A8)
class APreviewPet : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	TEnumAsByte<EAthenaAnimationPetRoamingState>       InitialAnimState;                                         // 0x04B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FAIPartId                                   InitialPartIdToLoad;                                      // 0x04B4(0x0008) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class UAIPartsCategory*                            PreviewPetPartsCategory;                                  // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      PreviewPetMesh;                                           // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAIPartsRetrievalComponent*                  AIPartsRetrievalComponent;                                // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPetPartCustomisationComponent*              PetPartCustomisationComponent;                            // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x04E0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAI.PreviewPet"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
