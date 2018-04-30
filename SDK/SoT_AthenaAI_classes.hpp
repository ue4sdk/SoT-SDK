#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAI.AIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAIStrategyId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIStrategyId");
		return ptr;
	}

};


// Class AthenaAI.AIPartsDesc
// 0x0000 (0x0028 - 0x0028)
class UAIPartsDesc : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsDesc");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPlayerTracker");
		return ptr;
	}

};


// Class AthenaAI.AIInteractableComponent
// 0x0018 (0x00E8 - 0x00D0)
class UAIInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      Type;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DetachOffsetFromOwner;                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableComponent");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_BaseConditional");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableType");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIFormComponent
// 0x0078 (0x0148 - 0x00D0)
class UAthenaAIFormComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UAthenaAIFormDataAsset*                      FormData;                                                 // 0x01E3(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* HitReactionsLayer;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponent");
		return ptr;
	}


	void OnRep_FormData();
};


// Class AthenaAI.AthenaAIFormDataAsset
// 0x0040 (0x0068 - 0x0028)
class UAthenaAIFormDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FAIFormDamageResponse>               DamageResponses;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     KilledVfxTemplate;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AICharacterAudioComponent;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimNotifyEmitterWithObservers;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementSpeedMultipler;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormDataAsset");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIClassId");
		return ptr;
	}

};


// Class AthenaAI.AIClassIdTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIClassIdTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIClassIdTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIColorVariantPool
// 0x0010 (0x0038 - 0x0028)
class UAIColorVariantPool : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIColorVariantPool");
		return ptr;
	}

};


// Class AthenaAI.AIDebugVisualisationComponent
// 0x0040 (0x0110 - 0x00D0)
class UAIDebugVisualisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FAIDebugVisualisationBox>            Boxes;                                                    // 0x01E3(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCylinder>       Cylinders;                                                // 0x01E3(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationSphere>         Spheres;                                                  // 0x01E3(0x0010) (Edit, Net, ZeroConstructor)
	TArray<struct FAIDebugVisualisationCone>           Cones;                                                    // 0x01E3(0x0010) (Edit, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIDebugVisualisationComponent");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipe
// 0x0020 (0x0048 - 0x0028)
class UAIEncounterGenerationRecipe : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FAIFormVarietyEntry>                 Forms;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipe");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeRankOrderList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeRankOrderList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationRecipeTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIEncounterGenerationRecipeTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategory
// 0x0018 (0x0040 - 0x0028)
class UAIPartsCategory : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UAIPartsDesc*>                        Parts;                                                    // 0x01E3(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsCategory");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UAthenaAIControllerParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               OverrideMaxHealth;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerSenseSettings            DefaultSenseSettings;                                     // 0x01E3(0x0010) (Edit)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPerceivedNotVisibleAge;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTargetPerceivedNotVisibleAge;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideTeamID;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAthenaAITeam>                         TeamID;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerSenseSettingOverride> AIStrategySenseSettingOverrides;                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              TargetSwitchToleranceDistance;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      TargetLoadWeightingBias;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              VisionAngleToStartScalingDistance;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScalingAppliedToDistanceAtMaxPeripheralVisionAngle;       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAIControllerParamValue>       InitialBlackboardValues;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataAsset");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterServiceInterface");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterGenerationService
// 0x0088 (0x04F8 - 0x0470)
class AAIEncounterGenerationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0470(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationService");
		return ptr;
	}

};


// Class AthenaAI.AIFormRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAIFormRankProgression : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FAIFormRankMapping>                  RankMappings;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFormRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AIFormProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIFormProgressionTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFormProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIFormTypeList
// 0x0018 (0x0040 - 0x0028)
class UAIFormTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UAthenaAIFormDataAsset*>              AllForms;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFormTypeList");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAILoadoutRankProgression : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FAILoadoutRankMapping>               RankMappings;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutProgressionTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AILoadoutTypeList
// 0x0010 (0x0038 - 0x0028)
class UAILoadoutTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AILoadoutTypeList");
		return ptr;
	}

};


// Class AthenaAI.AISkillsetRankProgression
// 0x0018 (0x0040 - 0x0028)
class UAISkillsetRankProgression : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FAISkillsetRankMapping>              RankMappings;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISkillsetRankProgression");
		return ptr;
	}

};


// Class AthenaAI.AISkillsetProgressionTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetProgressionTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISkillsetProgressionTypeList");
		return ptr;
	}

};


// Class AthenaAI.AISkillsetTypeList
// 0x0010 (0x0038 - 0x0028)
class UAISkillsetTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISkillsetTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIPartsCategoryTypeList
// 0x0010 (0x0038 - 0x0028)
class UAIPartsCategoryTypeList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsCategoryTypeList");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterService
// 0x0260 (0x06D0 - 0x0470)
class AAIEncounterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0470(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterService");
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
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x01E3(0x0020) (Edit)
	class UClass*                                      AIClass;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       TeamColor;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettings");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsFixed
// 0x0030 (0x00A0 - 0x0070)
class UAIEncounterSettingsFixed : public UAIEncounterSettings
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FStringAssetReference                       SpecificSkillset;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Loadout;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Form;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsFixed");
		return ptr;
	}

};


// Class AthenaAI.AIEncounterSettingsRankProgression
// 0x0030 (0x00A0 - 0x0070)
class UAIEncounterSettingsRankProgression : public UAIEncounterSettings
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FStringAssetReference                       SkillsetProgression;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutProgression;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormProgression;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsRankProgression");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableOperatorInterface");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AIItemParameterInterface");
		return ptr;
	}

};


// Class AthenaAI.AIManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIManagerServiceInterface");
		return ptr;
	}


	void StartDespawnAI(class APawn* AIActor);
	int GetNumOfSpawnedPawns();
};


// Class AthenaAI.AIPlayerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPlayerServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAITypeListDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaAITypeListDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FAITypeData>                         AITypes;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAITypeListDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAISettings
// 0x0068 (0x0090 - 0x0028)
class UAthenaAISettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringAssetReference                       AITypesAsset;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AISpawnContextListAsset;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	int                                                FallbackAIDifficultyRank;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNumOfSpawnedActors;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxPlayerEquivalentAIsPerRegion;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxWorldAICostUnitsForWorld;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AIRegionCostUnitsForPlayer;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterNetRelevancy;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterRegionDensityCheckTimer;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterWorldDensityCheckTimer;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceToPlayerToRaiseSpawnPriority;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingCanSpawnRequestTime;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingCanSpawnRequestTime;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRetryingLocationCheckTime;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRetryingLocationCheckTime;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CharacterAINoiseTickInterval;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PeriodicAINoiseComponentTickInterval;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityDormancyRange;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FaunaPlayerProximityTickTime;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAISettings");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextId");
		return ptr;
	}

};


// Class AthenaAI.AISpawner
// 0x0190 (0x01B8 - 0x0028)
class UAISpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsCollection;                                // 0x01E3(0x0048) (Edit)
	int                                                MaxNumOfSpawnedPawns;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAISpawnContextIdEncounterSettingsPair> SpawnContextSpecificEncounterSettings;                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UAIEncounterSettings*                        DefaultEncounterSettings;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   FindSpawnPosQuery;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      FindSpawnPosQueryRunMode;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PriorityForSpawnedPawns;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasSpawnerLevelEncounters;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NavMeshOverride;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawner");
		return ptr;
	}


	int GetNumOfSpawnRequests();
};


// Class AthenaAI.AIManagerService
// 0x05E0 (0x0A50 - 0x0470)
class AAIManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0470(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIManagerService");
		return ptr;
	}


	void TickService(float DeltaSeconds);
	void StartDespawnAI(class APawn* AIActor);
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
		static auto ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerServiceInterface");
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
// 0x00A0 (0x0AF0 - 0x0A50)
class ADebugAIManagerService : public AAIManagerService
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0A50(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerService");
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
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UAIPartsCategoryTypeList*                    PartsCategoriesList;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPartsService");
		return ptr;
	}

};


// Class AthenaAI.AIPawnInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPawnInterface");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.FaunaAIPlayerTracker");
		return ptr;
	}

};


// Class AthenaAI.AIPlayerTrackerSpawnerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPlayerTrackerSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerSpawnerInterface");
		return ptr;
	}

};


// Class AthenaAI.AISpawnContextList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnContextList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextList");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnContextProviderInterface");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BountySpawnerAudioZonesInterface");
		return ptr;
	}

};


// Class AthenaAI.AIBountySpawner
// 0x0160 (0x0318 - 0x01B8)
class UAIBountySpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x01B8(0x002B) MISSED OFFSET
	float                                              MaximumDistanceToPerceiveOnSpawnsAfterFirstGroup;         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIBountySpawnerWaveGroup>           WaveGroups;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x01E3(0x0020) (Edit)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x01E3(0x0020) (Edit)
	TArray<float>                                      WaveSuicideTime;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              WaveSuicideMinDist;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CrewMembers;                                              // 0x01E3(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              NonCrewMembersInRegion;                                   // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x125];                                     // 0x01F3(0x0125) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIBountySpawner");
		return ptr;
	}

};


// Class AthenaAI.AIFaunaSpawner
// 0x0178 (0x0330 - 0x01B8)
class UAIFaunaSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x01B8(0x002B) MISSED OFFSET
	struct FAIFaunaSpawnerWave                         FaunaWave;                                                // 0x01E3(0x0140) (Edit)
	class AActor*                                      FaunaLeader;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AActor*>                              PlayersInSpawnArea;                                       // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x13D];                                     // 0x01F3(0x013D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIFaunaSpawner");
		return ptr;
	}


	void SpawnFaunaGroup();
};


// Class AthenaAI.AIInteractableSpawner
// 0x0108 (0x02C0 - 0x01B8)
class UAIInteractableSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x01B8(0x002B) MISSED OFFSET
	class UClass*                                      AIInteractableType;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InhabitedChance;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulInhabitedCheck;                       // 0x01E3(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedInhabitedCheck;                           // 0x01E3(0x0030) (Edit)
	float                                              SpawnForInteractableChance;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterSuccessfulSpawnOnInteractableCheck;             // 0x01E3(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayAfterFailedSpawnOnInteractableCheck;                 // 0x01E3(0x0030) (Edit)
	bool                                               RunInhabitedSimulation;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               RunSpawnForInteractableSimulation;                        // 0x01E3(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumIterations;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD9];                                      // 0x01E7(0x00D9) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIInteractableSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIPerCrewSpawner
// 0x0120 (0x02D8 - 0x01B8)
class UAIPerCrewSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x01B8(0x002B) MISSED OFFSET
	int                                                MaxNumOfCrewsToSpawnFor;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FRankBasedWave>                      RankBasedWaves;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAIPerCrewSpawnerRankBasedDelay>     RespawnTimerRangesBasedOnRank;                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0xE5];                                      // 0x01F3(0x00E5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawner");
		return ptr;
	}

};


// Class AthenaAI.AIPerPlayerSpawner
// 0x0120 (0x02D8 - 0x01B8)
class UAIPerPlayerSpawner : public UAISpawner
{
public:
	unsigned char                                      UnknownData00[0x2B];                                      // 0x01B8(0x002B) MISSED OFFSET
	bool                                               CheckSpawnedActorsInRadiusBeforeSpawning;                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusToCheckForExistingPopulation;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExistingPopulationInRadius;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DespawnAllPawnsWhenAllPlayersLeave;                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxActorsTotalPerPlayer;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FRankedWaveArray>                    RankedWaveArrays;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               RunSimulation;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                RankForSimulation;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumIterations;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF1];                                      // 0x01E7(0x00F1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIPerPlayerSpawner");
		return ptr;
	}


	void PlayerDeath(class AActor* Player);
	int GetNumOfPlayers();
};


// Class AthenaAI.AIBoobyTrapSpawner
// 0x00B0 (0x0388 - 0x02D8)
class UAIBoobyTrapSpawner : public UAIPerPlayerSpawner
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02D8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AIBoobyTrapSpawner");
		return ptr;
	}

};


// Class AthenaAI.AISpawnerList
// 0x0010 (0x0038 - 0x0028)
class UAISpawnerList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnerList");
		return ptr;
	}

};


// Class AthenaAI.AISpawnPointSeedComponent
// 0x0000 (0x02F0 - 0x02F0)
class UAISpawnPointSeedComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnPointSeedComponent");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AISpawnRegionInterface");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AITargetInterface");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AITargetWeaponInterface");
		return ptr;
	}


	bool FindAimConfigToHitTarget(const struct FVector& Target, struct FRotator* OutAimConfig);
};


// Class AthenaAI.AthenaAICharacterPathFollowingComponent
// 0x0038 (0x02D0 - 0x0298)
class UAthenaAICharacterPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0298(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterPathFollowingComponent");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIController
// 0x0330 (0x0878 - 0x0548)
class AAthenaAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0548(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIController");
		return ptr;
	}


	void StopBehaviourLogic();
	void SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense);
	void SetNamedControllerParam(const struct FName& ParamName, float Value);
	void RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor, const struct FVector& TriggerActorLocation, const struct FVector& SpawnPosition);
	void OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors);
	void OnNewlySpawned();
	void OnFinishDespawn();
	bool IsActorPerceived(class AActor* TargetActor);
	class AActor* GetTargetActor();
	class UAthenaAIPerceptionComponent* GetAthenaAIPerceptionComponent();
	void GetAllSeenActors(TArray<class AActor*>* SeenActors);
	struct FWeightedProbabilityRangeOfRanges FindNamedWeightedRangesControllerParam(const struct FName& ParamName);
	float FindNamedControllerParam(const struct FName& ParamName);
	void ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn);
};


// Class AthenaAI.AthenaAICharacterController
// 0x00A0 (0x0918 - 0x0878)
class AAthenaAICharacterController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0878(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterController");
		return ptr;
	}


	void SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value);
};


// Class AthenaAI.FaunaAIContollerParamsDataAsset
// 0x0088 (0x0138 - 0x00B0)
class UFaunaAIContollerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	struct FWeightedProbabilityRange                   Courage;                                                  // 0x01E3(0x0020) (Edit)
	TArray<struct FCarriedItemThreatOverride>          CarriedItemThreatOverrides;                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               ThreatenedBySightOfCarrier;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FHearingThreat>                      KnownHearingDangers;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              CarrierHearingThreatSpeedThreshold;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreat;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CharacterDistanceToDangerRatingCurve;                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DangerRatingToAgitationDurationCurve;                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMin;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeAgitatedMax;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgitationDurationVariance;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlertThreshold;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FleeThreshold;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBecomeCalm;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CalmCooldownTime;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromLeaderForIdle;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToLeaderPatrolChanceCurve;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.FaunaAIContollerParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaFaunaAIController
// 0x0150 (0x09C8 - 0x0878)
class AAthenaFaunaAIController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0878(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaFaunaAIController");
		return ptr;
	}


	void LeaderDestroyed(class AActor* Actor);
	class AActor* GetLeader();
	float GetCourage();
	class UAthenaAICharacterPathFollowingComponent* GetAthenaAICharPathFollowingComp();
};


// Class AthenaAI.AthenaSwimmingAIController
// 0x00D8 (0x0950 - 0x0878)
class AAthenaSwimmingAIController : public AAthenaAIController
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0878(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaSwimmingAIController");
		return ptr;
	}


	void TargetActorDestroyed(class AActor* Actor);
	void SetTargetActor(class AActor* Actor);
};


// Class AthenaAI.AthenaAICharacterControllerParamsDataAsset
// 0x0060 (0x0110 - 0x00B0)
class UAthenaAICharacterControllerParamsDataAsset : public UAthenaAIControllerParamsDataAsset
{
public:
	unsigned char                                      UnknownData00[0x133];                                     // 0x00B0(0x0133) MISSED OFFSET
	bool                                               UseRVOAvoidance;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStrategyMovementProperties>       AIStrategyMovementProperties;                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemCategoryAIStrategyMovementPropertiesOverride> ItemCategoryAIStrategyMovementPropertiesOverrides;        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 DistanceInMToCannonShotHitChanceCurve;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties> WieldedItemProjectileEffectivenessProperties;             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAICharacterControllerItemCategoryNamedParams> WieldedItemOverrideNamedControllerParams;                 // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAthenaAIItemParamValue>             NamedItemParams;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIControllerParamsDataProvider
// 0x0018 (0x0040 - 0x0028)
class UAthenaAIControllerParamsDataProvider : public UAIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataProvider");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIDebugFunctionLibrary");
		return ptr;
	}


	void STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, class UClass* ClassId, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay);
	void STATIC_SpawnAIBySpawner(const struct FName& RegionName, class AActor* TriggerActor);
	void STATIC_SpawnAI(TAssetPtr<class UClass> AIClass, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, bool RequireNavMesh, float Delay, bool MakeAIPermanentlyNetRelevant);
	void STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner);
	int STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner);
	void STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController, class UAthenaAIControllerParamsDataAsset* ControllerParams);
	void STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext);
	void STATIC_DespawnAIPawn(class APawn* Pawn);
	struct FVector STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
};


// Class AthenaAI.AthenaAIPerceptionComponent
// 0x0000 (0x01D0 - 0x01D0)
class UAthenaAIPerceptionComponent : public UAIPerceptionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIPerceptionComponent");
		return ptr;
	}


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
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAISightTargetInterface");
		return ptr;
	}

};


// Class AthenaAI.AthenaAIWeightedRangesDataProvider
// 0x0038 (0x0060 - 0x0028)
class UAthenaAIWeightedRangesDataProvider : public UAIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.AthenaAIWeightedRangesDataProvider");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActionState
// 0x0020 (0x0088 - 0x0068)
class UBTDecorator_ActionState : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	TEnumAsByte<EActionStateMachineTrackId>            TrackId;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateId;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActionState");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ActorInWater
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_ActorInWater : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	bool                                               ReverseLogic;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActorInWater");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardClassValue
// 0x0020 (0x00B0 - 0x0090)
class UBTDecorator_CompareBlackboardClassValue : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	class UClass*                                      Class;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      CachedDescription;                                        // 0x01E3(0x0010) (ZeroConstructor)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardClassValue");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardValues
// 0x0018 (0x0080 - 0x0068)
class UBTDecorator_CompareBlackboardValues : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	TArray<struct FBlackboardValueCondition>           FloatConditions;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBlackboardValueCompositeType>         FloatConditionComposite;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardValues");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareFloatValueBase
// 0x0038 (0x00B8 - 0x0080)
class UBTDecorator_CompareFloatValueBase : public UBTDecorator_CompareBlackboardValues
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	TEnumAsByte<EFloatValueComparisonType>             Comparison;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   Value;                                                    // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareFloatValueBase");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_CompareBlackboardFloatValue
// 0x0028 (0x00E0 - 0x00B8)
class UBTDecorator_CompareBlackboardFloatValue : public UBTDecorator_CompareFloatValueBase
{
public:
	unsigned char                                      UnknownData00[0x12B];                                     // 0x00B8(0x012B) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareCurrentHealth");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TargetInRange
// 0x0088 (0x0108 - 0x0080)
class UBTDecorator_TargetInRange : public UBTDecorator_CompareBlackboardValues
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x01E3(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x01E3(0x0030) (Edit)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRange");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_TestRange
// 0x0068 (0x00E8 - 0x0080)
class UBTDecorator_TestRange : public UBTDecorator_CompareBlackboardValues
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   EnterRange;                                               // 0x01E3(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   ExitRange;                                                // 0x01E3(0x0030) (Edit)
	bool                                               TestForOutsideRange;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRange");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRangeOfSeenActors");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ConeCheck3D
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_ConeCheck3D : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              ConeHalfAngle;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ConeCheck3D");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_DockedToInteractable");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_FeatureToggle
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_FeatureToggle : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FName                                       FeatureName;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_FeatureToggle");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_ItemReadyToUse
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_ItemReadyToUse : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	class UClass*                                      NotificationId;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ItemReadyToUse");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_LineOfSightToTarget
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_LineOfSightToTarget : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	float                                              Interval;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LineOfSightToTarget");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_MultipleRandomDiceRolls
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_MultipleRandomDiceRolls : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	TArray<struct FChanceAndBlackboardKeyPair>         ChanceKeyPairs;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_NearSurfaceOfWater
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_NearSurfaceOfWater : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              DistanceFromSurface;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_NearSurfaceOfWater");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomDiceRoll
// 0x0030 (0x0098 - 0x0068)
class UBTDecorator_RandomDiceRoll : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomDiceRoll");
		return ptr;
	}

};


// Class AthenaAI.BTDecorator_RandomLoop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_RandomLoop : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	int                                                MinNumLoops;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumLoops;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RandomNumLoopCurve;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomLoop");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RollAgainstPatrolChance");
		return ptr;
	}

};


// Class AthenaAI.BTService_AimAIInteractable
// 0x0078 (0x00E8 - 0x0070)
class UBTService_AimAIInteractable : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FBlackboardKeySelector                      Interactable;                                             // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_AimAIInteractable");
		return ptr;
	}

};


// Class AthenaAI.BTService_DisableCollisions
// 0x0000 (0x0070 - 0x0070)
class UBTService_DisableCollisions : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_DisableCollisions");
		return ptr;
	}

};


// Class AthenaAI.BTService_EnableFaceFocusActor
// 0x0008 (0x00A0 - 0x0098)
class UBTService_EnableFaceFocusActor : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x14B];                                     // 0x0098(0x014B) MISSED OFFSET
	bool                                               DisableUpdateMoveFocusForCurrentPathOnExit;               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_EnableFaceFocusActor");
		return ptr;
	}

};


// Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch
// 0x0008 (0x00A0 - 0x0098)
class UBTService_IncrementFloatValueWithTimeSpentInBranch : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x14B];                                     // 0x0098(0x014B) MISSED OFFSET
	float                                              TimeMultiplier;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_QueryPerceptionForTarget");
		return ptr;
	}

};


// Class AthenaAI.BTService_QueryShipsForTarget
// 0x0030 (0x00A0 - 0x0070)
class UBTService_QueryShipsForTarget : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FAIDataProviderFloatValue                   MaxShipDistanceFromHomePosition;                          // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_QueryShipsForTarget");
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQuery
// 0x0020 (0x00B8 - 0x0098)
class UBTService_RunEQSQuery : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x14B];                                     // 0x0098(0x014B) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQuery");
		return ptr;
	}

};


// Class AthenaAI.BTService_RunEQSQueryOnActorMovement
// 0x0068 (0x0120 - 0x00B8)
class UBTService_RunEQSQueryOnActorMovement : public UBTService_RunEQSQuery
{
public:
	unsigned char                                      UnknownData00[0x12B];                                     // 0x00B8(0x012B) MISSED OFFSET
	bool                                               OverrideQueryTemplateWithBlackboardValue;                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      OverrideEQSKey;                                           // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      MovingActorKey;                                           // 0x01E3(0x0028) (Edit)
	float                                              MinimumActorMovementToRunEQS;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumActorVelocityChangeToRunEQS;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQueryOnActorMovement");
		return ptr;
	}

};


// Class AthenaAI.BTService_SetAIStrategy
// 0x0008 (0x0078 - 0x0070)
class UBTService_SetAIStrategy : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class UClass*                                      NewStrategy;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIStrategy");
		return ptr;
	}

};


// Class AthenaAI.BTService_TriggerNotifications
// 0x0020 (0x0090 - 0x0070)
class UBTService_TriggerNotifications : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	class UClass*                                      EnterBranchNotificationId;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeaveBranchNotificationId;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_TriggerNotifications");
		return ptr;
	}

};


// Class AthenaAI.BTService_UpdateTargetForInteractable
// 0x0050 (0x00C0 - 0x0070)
class UBTService_UpdateTargetForInteractable : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FBlackboardKeySelector                      Interactable;                                             // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateTargetForInteractable");
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaMoveTo
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_AthenaMoveTo : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x143];                                     // 0x00A0(0x0143) MISSED OFFSET
	bool                                               ShouldFailBeforeSlowDown;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExitBeforeSlowDownDistanceTolerance;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldOverrideMaxSpeedToSlow;                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainFacingBeforeMove;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaMoveTo");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceChange
// 0x0008 (0x00C0 - 0x00B8)
class UBTTask_MoveToFailOnDistanceChange : public UBTTask_AthenaMoveTo
{
public:
	unsigned char                                      UnknownData00[0x12B];                                     // 0x00B8(0x012B) MISSED OFFSET
	bool                                               FailOnDistanceBeingLess;                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FailDistance;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceChange");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged
// 0x0028 (0x00E8 - 0x00C0)
class UBTTask_MoveToFailOnDistanceToTargetChanged : public UBTTask_MoveToFailOnDistanceChange
{
public:
	unsigned char                                      UnknownData00[0x123];                                     // 0x00C0(0x0123) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToMovingLocation
// 0x0010 (0x00C8 - 0x00B8)
class UBTTask_MoveToMovingLocation : public UBTTask_AthenaMoveTo
{
public:
	unsigned char                                      UnknownData00[0x12B];                                     // 0x00B8(0x012B) MISSED OFFSET
	float                                              MinimumLocationMovementForRePath;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumTimeBeforeRePath;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsContinuous;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToMovingLocation");
		return ptr;
	}

};


// Class AthenaAI.BTTask_AthenaWait
// 0x0060 (0x00C0 - 0x0060)
class UBTTask_AthenaWait : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Min;                                                      // 0x01E3(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   Max;                                                      // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWait");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearBlackboardValue");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearPerceptualData");
		return ptr;
	}

};


// Class AthenaAI.BTTask_CopyBlackboardActor
// 0x0050 (0x00B0 - 0x0060)
class UBTTask_CopyBlackboardActor : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FBlackboardKeySelector                      SrcBlackboardKey;                                         // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardActor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_IgnoreActorTemporarily
// 0x0008 (0x0090 - 0x0088)
class UBTTask_IgnoreActorTemporarily : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              TimeToForget;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_IgnoreActorTemporarily");
		return ptr;
	}

};


// Class AthenaAI.BTTask_InteractWith
// 0x0008 (0x0090 - 0x0088)
class UBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	class UClass*                                      NotificationId;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_InteractWith");
		return ptr;
	}

};


// Class AthenaAI.BTTask_MoveToTarget
// 0x0030 (0x00D0 - 0x00A0)
class UBTTask_MoveToTarget : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x143];                                     // 0x00A0(0x0143) MISSED OFFSET
	float                                              MaxDistFromDestinationPosToTargetPos;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OverrideMaxSpeedToSlowDistanceFactor;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetBlackboardKey;                                      // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToTarget");
		return ptr;
	}

};


// Class AthenaAI.BTTask_NOP
// 0x0008 (0x0068 - 0x0060)
class UBTTask_NOP : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	int                                                Id;                                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_NOP");
		return ptr;
	}

};


// Class AthenaAI.BTTask_PlayMontage
// 0x0010 (0x0070 - 0x0060)
class UBTTask_PlayMontage : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UObject*                                     MontageToPlay;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayMontage");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_RequestDespawn");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetAIStrategy
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetAIStrategy : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UClass*                                      NewStrategy;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategy");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardActor
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardActor : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardActor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardBoolValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardBoolValue : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	bool                                               NewValue;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardBoolValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardEQSValue
// 0x0008 (0x0090 - 0x0088)
class UBTTask_SetBlackboardEQSValue : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	class UEnvQuery*                                   EQS;                                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardEQSValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValue
// 0x0030 (0x00B8 - 0x0088)
class UBTTask_SetBlackboardFloatValue : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	struct FAIDataProviderFloatValue                   FloatValue;                                               // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValue");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax
// 0x0060 (0x00E8 - 0x0088)
class UBTTask_SetBlackboardFloatValueFromMinMax : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	struct FAIDataProviderFloatValue                   MinValue;                                                 // 0x01E3(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   MaxValue;                                                 // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot
// 0x0078 (0x00D8 - 0x0060)
class UBTTask_SetupAITargetWeaponForNextShot : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FBlackboardKeySelector                      Interactable;                                             // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetForInteractable;                                    // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      TargetRelativeAimVector;                                  // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_StopMovementImmediately");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_StorePawnLocationInBlackboard");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetActor
// 0x0058 (0x00E0 - 0x0088)
class UBTTask_SwimAttackTargetActor : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              DamageToApply;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleToTargetToSuccessfullyAttack;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttackableTypeToAnimMapping>        AttackAnimMapping;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LoSTraceProfileName;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x01E3(0x0030) (Edit)
	float                                              MaxDistanceToTargetToApplyDamage;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetActor");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimAttackTargetShip
// 0x0070 (0x00F8 - 0x0088)
class UBTTask_SwimAttackTargetShip : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              BiteRadiusOffsetToBeginAttack;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AttackAnim;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToPerformAttack;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoSTraceProfileName;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   LosTraceRadius;                                           // 0x01E3(0x0030) (Edit)
	float                                              MinImpactForce;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxImpactForce;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactForceZ;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactLocationZOffet;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MinDamageHolesToApply;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxDamageHolesToApply;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetShip");
		return ptr;
	}

};


// Class AthenaAI.SwimmingPathFollowingComponent
// 0x0118 (0x01E8 - 0x00D0)
class USwimmingPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              DirectSwimmingDotToTarget;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTargetPitchFactor;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPosDeltaSqToRepathToMovingTarget;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPosDeltaSqToInvalidateFixedLocation;                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchBezierControlPointsLengthFactor;                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMovingAwayFromTargetPosToFlagFailure;                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LineOfSightCollisionProfile;                              // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightSphereCastRadius;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LineOfSightCheckInterval;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInNewPath;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstLoSTriggerTimeInRePath;                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugOnServer;                                        // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             CollisionTypesToDoPathUpdate;                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USwimmingCreatureMovementComponent*          MovementComponent;                                        // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.SwimmingPathFollowingComponent");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTo
// 0x0040 (0x00C8 - 0x0088)
class UBTTask_SwimTo : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              AcceptableRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingGoalCheckMode>                GoalCheckMode;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingArcMode>                      ArcMode;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Abort3DSwimIfCresting;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetActorZOffset;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESwimmingSyncMode>                     SwimSyncMode;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TrackTargetActor;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      TrackedTargetActorKey;                                    // 0x01E3(0x0028) (Edit)
	TEnumAsByte<ESwimmingLineOfSightTest>              LineOfSightTestMode;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTo");
		return ptr;
	}

};


// Class AthenaAI.BTTask_SwimTurnOnTheSpot
// 0x0010 (0x0098 - 0x0088)
class UBTTask_SwimTurnOnTheSpot : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	float                                              MaxTurnSpringAccel;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilMaxTurnSpringAccel;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleDeltaToAcceptFinalRotation;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTurnOnTheSpot");
		return ptr;
	}

};


// Class AthenaAI.BTTask_TriggerNotification
// 0x0008 (0x0068 - 0x0060)
class UBTTask_TriggerNotification : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UClass*                                      NotificationId;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.BTTask_TriggerNotification");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryContext_LeaderFromBlackboard
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_LeaderFromBlackboard : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_PositionFromBlackboard");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActors");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_LineTowardsBlackboardPosition
// 0x0070 (0x00F0 - 0x0080)
class UEnvQueryGenerator_LineTowardsBlackboardPosition : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	class UClass*                                      LineOrigin;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LineEnd;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIDataProviderFloatValue                   DistanceBetweenPointsData;                                // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     MaxPointsPerLineData;                                     // 0x01E3(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_LineTowardsBlackboardPosition");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_PointsAtContext
// 0x0008 (0x0088 - 0x0080)
class UEnvQueryGenerator_PointsAtContext : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_PointsAtContext");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterDonut
// 0x0150 (0x01D0 - 0x0080)
class UEnvQueryGenerator_WaterDonut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ZOffsetFromCentre;                                        // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E3(0x0001)
	unsigned char                                      ProjectPointsToWaterSurface : 1;                          // 0x01E3(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterDonut");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing
// 0x0078 (0x00F8 - 0x0080)
class UEnvQueryGenerator_WaterMultiDeckerRing : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Radius;                                                   // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	TArray<float>                                      ZOffsetOfRingsFromContext;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Center;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_HasLineOfSight
// 0x0010 (0x0180 - 0x0170)
class UEnvQueryTest_HasLineOfSight : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	TEnumAsByte<ETraceDirection>                       TraceDirection;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Context;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_HasLineOfSight");
		return ptr;
	}

};


// Class AthenaAI.EnvQueryTest_IsAngleInRange2D
// 0x00A0 (0x0210 - 0x0170)
class UEnvQueryTest_IsAngleInRange2D : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	struct FEnvDirection                               LineA;                                                    // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MinAngleDegrees;                                          // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   MaxAngleDegrees;                                          // 0x01E3(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_IsAngleInRange2D");
		return ptr;
	}

};


// Class AthenaAI.PeriodicAINoiseEventComponent
// 0x0040 (0x0110 - 0x00D0)
class UPeriodicAINoiseEventComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FName                                       NoiseTag;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NoiseRangeBasedOnMovementSpeed;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstantNoiseRange;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MovementSpeedToNoiseRange;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerActor;                                               // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.PeriodicAINoiseEventComponent");
		return ptr;
	}

};


// Class AthenaAI.TinySharkExperience
// 0x0060 (0x04D0 - 0x0470)
class ATinySharkExperience : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkExperience");
		return ptr;
	}

};


// Class AthenaAI.TinySharkParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UTinySharkParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkParamsDataAsset");
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
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceInterface");
		return ptr;
	}

};


// Class AthenaAI.TinySharkService
// 0x0038 (0x04A8 - 0x0470)
class ATinySharkService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkService");
		return ptr;
	}

};


// Class AthenaAI.TinySharkServiceParamsDataAsset
// 0x0008 (0x0030 - 0x0028)
class UTinySharkServiceParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceParamsDataAsset");
		return ptr;
	}

};


// Class AthenaAI.WaterbasedAISupplier
// 0x0008 (0x0478 - 0x0470)
class AWaterbasedAISupplier : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaAI.WaterbasedAISupplier");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
