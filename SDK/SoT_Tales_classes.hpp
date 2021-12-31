#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tales.TaleQuestStep
// 0x0068 (0x0090 - 0x0028)
class UTaleQuestStep : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	UTaleQuestStepDesc*                                TaleStepDesc;                                             // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStep"));
		return ptr;
	}


	void Signal();
};


// Class Tales.TaleQuestService
// 0x0038 (0x0060 - 0x0028)
class UTaleQuestService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestService"));
		return ptr;
	}

};


// Class Tales.TaleQuestServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestServiceDesc : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestStepDesc
// 0x0058 (0x0080 - 0x0028)
class UTaleQuestStepDesc : public UObject
{
public:
	bool                                               Fork;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TMap<FName, FQuestVariableAny>                     PromotedPropertyVariables;                                // 0x0030(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleMigrationAction
// 0x0000 (0x0028 - 0x0028)
class UTaleMigrationAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleMigrationAction"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStep
// 0x0038 (0x00C8 - 0x0090)
class UTaleQuestFramedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TArray<UTaleQuestService*>                         Services;                                                 // 0x0098(0x0010) (ZeroConstructor)
	UTaleQuestFramedStepDesc*                          FrameDesc;                                                // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	UScriptStruct*                                     StructForCollector;                                       // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStepDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<UTaleQuestServiceDesc*>                     Services;                                                 // 0x0080(0x0010) (Edit, ExportObject, ZeroConstructor)
	UScriptStruct*                                     Variables;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStepDesc"));
		return ptr;
	}

};


// Class Tales.ContendedResourceServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UContendedResourceServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ContendedResourceServiceInterface"));
		return ptr;
	}

};


// Class Tales.WorldResourceRegistryInterface
// 0x0000 (0x0028 - 0x0028)
class UWorldResourceRegistryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WorldResourceRegistryInterface"));
		return ptr;
	}

};


// Class Tales.ContendedResourceComponent
// 0x0038 (0x0100 - 0x00C8)
class UContendedResourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ContendedResourceComponent"));
		return ptr;
	}

};


// Class Tales.EnvQueryContext_TaleContextBase
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TaleContextBase : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.EnvQueryContext_TaleContextBase"));
		return ptr;
	}

};


// Class Tales.IslandTypeWeightsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UIslandTypeWeightsDataAsset : public UDataAsset
{
public:
	TArray<FIslandTypeWeights>                         IslandTypeWeightsForDifficultyRanks;                      // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.IslandTypeWeightsDataAsset"));
		return ptr;
	}

};


// Class Tales.SplineFootprintPathComponent
// 0x0020 (0x0630 - 0x0610)
class USplineFootprintPathComponent : public USplineComponent
{
public:
	UMaterialInterface*                                DecalMaterial;                                            // 0x0610(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	FSplineFootprintPathTool                           PathTool;                                                 // 0x0618(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	float                                              DecalYaw;                                                 // 0x061C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            DecalUniformScale;                                        // 0x0620(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x062C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SplineFootprintPathComponent"));
		return ptr;
	}

};


// Class Tales.StartTallTaleConditionalStatTrigger
// 0x0000 (0x0030 - 0x0030)
class UStartTallTaleConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StartTallTaleConditionalStatTrigger"));
		return ptr;
	}

};


// Class Tales.TaleQuestArrayEntrySelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestArrayEntrySelectionStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.FixedArrayEntrySelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class UFixedArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	int                                                IndexToSelect;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FixedArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.RandomArrayEntrySelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class URandomArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RandomArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.SequentialArrayEntrySelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class USequentialArrayEntrySelectionStrategy : public UTaleQuestArrayEntrySelectionStrategy
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SequentialArrayEntrySelectionStrategy"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContract
// 0x0088 (0x00B0 - 0x0028)
class UTaleQuestCargoRunContract : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	FScriptMulticastDelegate                           OnCompleted;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnDelivered;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnCollected;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<FTaleQuestCargoRunContractItem>             ItemsToCollect;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	AActor*                                            DeliverToNPC;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            CollectFromNPC;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContract"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContractsService
// 0x0048 (0x00A8 - 0x0060)
class UTaleQuestCargoRunContractsService : public UTaleQuestService
{
public:
	TArray<UTaleQuestCargoRunContract*>                Contracts;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContractsService"));
		return ptr;
	}


	UTaleQuestCargoRunContract* GetContract(const FGuid& Guid);
	FGuid AddContract(TArray<UClass*> InItems, AActor* InCollectFromNPC, AActor* InDeliverToNPC, int InTimeLimitInMinutes);
};


// Class Tales.TaleQuestMerchantContract
// 0x0060 (0x0088 - 0x0028)
class UTaleQuestMerchantContract : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	FScriptMulticastDelegate                           OnCompleted;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnExpired;                                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnDelivered;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnCollected;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           OnAllocated;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContract"));
		return ptr;
	}

};


// Class Tales.TaleQuestMerchantContractsService
// 0x0010 (0x0070 - 0x0060)
class UTaleQuestMerchantContractsService : public UTaleQuestService
{
public:
	TArray<UTaleQuestMerchantContract*>                Contracts;                                                // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContractsService"));
		return ptr;
	}


	UTaleQuestMerchantContract* GetContract(const FGuid& Guid);
	FGuid AddContract(TArray<FTaleQuestDeliveryRequest> Requests, const FName& InDeliveryDestination, float InTimeLimit);
};


// Class Tales.TaleQuestImportFrame
// 0x0088 (0x00C0 - 0x0038)
class UTaleQuestImportFrame : public UTaleQuestRootFrame
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestImportFrame"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestSelectorServiceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary"));
		return ptr;
	}


	static void SetDebugVoyageSeed(int Seed);
	static void ResetVoyageDebugSeed();
};


// Class Tales.CutsceneResponsesTaleService
// 0x0030 (0x0090 - 0x0060)
class UCutsceneResponsesTaleService : public UTaleQuestService
{
public:
	TArray<UCutsceneResponseCoordinator*>              TrackedResponseCoordinators;                              // 0x0060(0x0010) (ZeroConstructor)
	TArray<UCutsceneResponseComponent*>                TrackedResponseComponents;                                // 0x0070(0x0010) (ExportObject, ZeroConstructor)
	TArray<AActor*>                                    ResponseRelevantActors;                                   // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CutsceneResponsesTaleService"));
		return ptr;
	}


	void TrackResponseCoordinator(UCutsceneResponseCoordinator* Coordinator);
	UCutsceneResponseSheet* StartCutsceneResponseSheet(AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, UClass* ResponseSheetClass);
	void ClearAllActiveResponseSheets();
	void AddResponseSheetRelevantActor(AActor* Actor);
};


// Class Tales.GameEventExclusionZoneTaleService
// 0x0028 (0x0088 - 0x0060)
class UGameEventExclusionZoneTaleService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GameEventExclusionZoneTaleService"));
		return ptr;
	}

};


// Class Tales.RewardGenTaleQuestService
// 0x0030 (0x0090 - 0x0060)
class URewardGenTaleQuestService : public UTaleQuestService
{
public:
	UTaleQuestWeightedItemDescSpawnDataAsset*          SpawnData;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ValidSpawnData;                                           // 0x0068(0x0010) (ZeroConstructor)
	TArray<UItemSpawnData*>                            ItemsToSpawn;                                             // 0x0078(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RewardGenTaleQuestService"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorService
// 0x0310 (0x0370 - 0x0060)
class UTaleQuestActorService : public UTaleQuestService
{
public:
	TArray<FTrackedActorData>                          TrackedActors;                                            // 0x0060(0x0010) (ZeroConstructor)
	TArray<FCriticalActorDelegateData>                 CriticalActors;                                           // 0x0070(0x0010) (ZeroConstructor)
	TArray<FSnapshottedActorData>                      SnapshottedActors;                                        // 0x0080(0x0010) (ZeroConstructor)
	UTaleQuestActorServiceDesc*                        Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	APhasedClusterRoot*                                PhasedClusterRoot;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<FPhasedActor>                               PhasedActors;                                             // 0x00A0(0x0010) (ZeroConstructor)
	TArray<FPhasedItem>                                PhasedItems;                                              // 0x00B0(0x0010) (ZeroConstructor)
	FText                                              CriticalActorHandedInByAnotherCrewFailureMessage;         // 0x00C0(0x0038)
	unsigned char                                      UnknownData00[0x278];                                     // 0x00F8(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestActorService"));
		return ptr;
	}

};


// Class Tales.TaleQuestEQSService
// 0x00C8 (0x0128 - 0x0060)
class UTaleQuestEQSService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0060(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEQSService"));
		return ptr;
	}

};


// Class Tales.TaleQuestFlameOfFateService
// 0x0060 (0x00C0 - 0x0060)
class UTaleQuestFlameOfFateService : public UTaleQuestService
{
public:
	UTaleQuestFlameOfFateServiceDesc*                  ServiceDesc;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFlameOfFateService"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectorService
// 0x0028 (0x0088 - 0x0060)
class UTaleQuestSelectorService : public UTaleQuestService
{
public:
	UTaleQuestSelectorServiceDesc*                     Desc;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorService"));
		return ptr;
	}


	int GetRandomIntegerInRange(int Minimum, int Maximum);
};


// Class Tales.TaleResourceBrokerService
// 0x0048 (0x00A8 - 0x0060)
class UTaleResourceBrokerService : public UTaleQuestService
{
public:
	TScriptInterface<class UContendedResourceServiceInterface> ContendedResourceService;                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UWorldResourceRegistryInterface> ResourceRegistry;                                         // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<FMigrationActionPair>                       MigrationActions;                                         // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleResourceBrokerService"));
		return ptr;
	}

};


// Class Tales.CutsceneResponsesTaleServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UCutsceneResponsesTaleServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CutsceneResponsesTaleServiceDesc"));
		return ptr;
	}

};


// Class Tales.GameEventExclusionZoneTaleServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UGameEventExclusionZoneTaleServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GameEventExclusionZoneTaleServiceDesc"));
		return ptr;
	}

};


// Class Tales.RewardGenTaleQuestServiceDesc
// 0x0008 (0x0030 - 0x0028)
class URewardGenTaleQuestServiceDesc : public UTaleQuestServiceDesc
{
public:
	UTaleQuestWeightedItemDescSpawnDataAsset*          SpawnData;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RewardGenTaleQuestServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorServiceDesc
// 0x0008 (0x0030 - 0x0028)
class UTaleQuestActorServiceDesc : public UTaleQuestServiceDesc
{
public:
	UClass*                                            ItemLostFailureRunnable;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestActorServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContractsServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestCargoRunContractsServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContractsServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEQSServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestEQSServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEQSServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestFlameOfFateServiceDesc
// 0x0010 (0x0038 - 0x0028)
class UTaleQuestFlameOfFateServiceDesc : public UTaleQuestServiceDesc
{
public:
	UClass*                                            LanternItemCategory;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlameOfFateType>                      FlameOfFateTypeToSet;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetFlameOnStart;                                          // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFlameOfFateServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestMerchantContractsServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestMerchantContractsServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContractsServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectorServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestSelectorServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorServiceDesc"));
		return ptr;
	}

};


// Class Tales.AddGameEventExclusionZoneStep
// 0x0008 (0x0098 - 0x0090)
class UAddGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	UAddGameEventExclusionZoneStepDesc*                Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.AddGameEventExclusionZoneStep"));
		return ptr;
	}

};


// Class Tales.CallObjectFunctionStep
// 0x0000 (0x0090 - 0x0090)
class UCallObjectFunctionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CallObjectFunctionStep"));
		return ptr;
	}

};


// Class Tales.DebugTaleAddInstancedLevelStep
// 0x0038 (0x00C8 - 0x0090)
class UDebugTaleAddInstancedLevelStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	UDebugTaleAddInstancedLevelStepDesc*               StepDesc;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	FString                                            InstancedLevelPath;                                       // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DebugTaleAddInstancedLevelStep"));
		return ptr;
	}

};


// Class Tales.DebugTaleAddInstancedLevelStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UDebugTaleAddInstancedLevelStepDesc : public UTaleQuestStepDesc
{
public:
	FText                                              InstancedLevelKeyword;                                    // 0x0080(0x0038) (Edit)
	uint32_t                                           InstancedLevelIndex;                                      // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DebugTaleAddInstancedLevelStepDesc"));
		return ptr;
	}

};


// Class Tales.DestroySpawnedActorStep
// 0x0000 (0x0090 - 0x0090)
class UDestroySpawnedActorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DestroySpawnedActorStep"));
		return ptr;
	}

};


// Class Tales.DoEQSQueryStep
// 0x0010 (0x00A0 - 0x0090)
class UDoEQSQueryStep : public UTaleQuestStep
{
public:
	UDoEQSQueryStepDesc*                               Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UTaleQuestEQSService*                              CachedTaleEQSService;                                     // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DoEQSQueryStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStep
// 0x0000 (0x0090 - 0x0090)
class UFindNamedPointStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsVectorStep
// 0x0000 (0x0090 - 0x0090)
class UFindNamedPointAsVectorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsVectorStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsTransformStep
// 0x0000 (0x0090 - 0x0090)
class UFindNamedPointAsTransformStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsTransformStep"));
		return ptr;
	}

};


// Class Tales.GenerateDigLocationInRadiusStep
// 0x0050 (0x00E0 - 0x0090)
class UGenerateDigLocationInRadiusStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GenerateDigLocationInRadiusStep"));
		return ptr;
	}

};


// Class Tales.GetVoyageDifficultyFromRankStep
// 0x0018 (0x00A8 - 0x0090)
class UGetVoyageDifficultyFromRankStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GetVoyageDifficultyFromRankStep"));
		return ptr;
	}

};


// Class Tales.InvokeDamageStep
// 0x0000 (0x0090 - 0x0090)
class UInvokeDamageStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.InvokeDamageStep"));
		return ptr;
	}

};


// Class Tales.LinkEQSContextWithVariableStep
// 0x0008 (0x0098 - 0x0090)
class ULinkEQSContextWithVariableStep : public UTaleQuestStep
{
public:
	ULinkEQSContextWithVariableStepDesc*               Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LinkEQSContextWithVariableStep"));
		return ptr;
	}

};


// Class Tales.LoadSequencerAnimationStep
// 0x0018 (0x00A8 - 0x0090)
class ULoadSequencerAnimationStep : public UTaleQuestStep
{
public:
	ULoadSequencerAnimationStepDesc*                   StepDesc;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	ASequencerCutSceneActor*                           SequencerCutSceneActor;                                   // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            TargetToSpawnActor;                                       // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LoadSequencerAnimationStep"));
		return ptr;
	}

};


// Class Tales.ParticipantRadiusTrackerStep
// 0x0020 (0x00B0 - 0x0090)
class UParticipantRadiusTrackerStep : public UTaleQuestStep
{
public:
	UParticipantRadiusTrackerStepDesc*                 Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ParticipantRadiusTrackerStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationOnCutsceneActorStep
// 0x0030 (0x00C0 - 0x0090)
class UPlaySequencerAnimationOnCutsceneActorStep : public UTaleQuestStep
{
public:
	UPlaySequencerAnimationOnCutsceneActorStepDesc*    StepDesc;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	ASequencerCutSceneActor*                           SequencerCutSceneActor;                                   // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<FPossessableSequence>                       PossessableSequences;                                     // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationOnCutsceneActorStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationStep
// 0x0038 (0x00C8 - 0x0090)
class UPlaySequencerAnimationStep : public UTaleQuestStep
{
public:
	UPlaySequencerAnimationStepDesc*                   StepDesc;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	ASequencerCutSceneActor*                           SequencerCutSceneActor;                                   // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationStep"));
		return ptr;
	}

};


// Class Tales.ProvokeHitReactionStep
// 0x0000 (0x0090 - 0x0090)
class UProvokeHitReactionStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ProvokeHitReactionStep"));
		return ptr;
	}

};


// Class Tales.RemoveGameEventExclusionZoneStep
// 0x0008 (0x0098 - 0x0090)
class URemoveGameEventExclusionZoneStep : public UTaleQuestStep
{
public:
	URemoveGameEventExclusionZoneStepDesc*             Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RemoveGameEventExclusionZoneStep"));
		return ptr;
	}

};


// Class Tales.SetEQSNamedContextStep
// 0x0008 (0x0098 - 0x0090)
class USetEQSNamedContextStep : public UTaleQuestStep
{
public:
	USetEQSNamedContextStepDesc*                       Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SetEQSNamedContextStep"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorWithTransformStep
// 0x00B0 (0x0140 - 0x0090)
class USpawnPhasedActorWithTransformStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0090(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorWithTransformStep"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedItemStep
// 0x0000 (0x0090 - 0x0090)
class USpawnPhasedItemStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedItemStep"));
		return ptr;
	}

};


// Class Tales.StartSuppressingCutsceneResponsesStep
// 0x0000 (0x0090 - 0x0090)
class UStartSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StartSuppressingCutsceneResponsesStep"));
		return ptr;
	}

};


// Class Tales.StopSuppressingCutsceneResponsesStep
// 0x0000 (0x0090 - 0x0090)
class UStopSuppressingCutsceneResponsesStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StopSuppressingCutsceneResponsesStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestChooseIslandFromWeightsStep
// 0x0038 (0x00C8 - 0x0090)
class UTaleQuestChooseIslandFromWeightsStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
	UIslandTypeWeightsDataAsset*                       IslandTypeWeights;                                        // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestChooseIslandFromWeightsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestClearTaleProposalsStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestClearTaleProposalsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestClearTaleProposalsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
// 0x0008 (0x0098 - 0x0090)
class UTaleQuestEmissaryCompanyActionRewardBoostStep : public UTaleQuestStep
{
public:
	UTaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStep
// 0x0030 (0x00C0 - 0x0090)
class UTaleQuestGrantRewardStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestPermanentPromptStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestPermanentPromptStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPermanentPromptStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectEntryFromArrayStep
// 0x0020 (0x00B0 - 0x0090)
class UTaleQuestSelectEntryFromArrayStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectEntryFromArrayStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateCheckpointStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestUpdateCheckpointStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateCheckpointStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStep
// 0x0010 (0x00A0 - 0x0090)
class UTaleQuestWaitForHandInStep : public UTaleQuestStep
{
public:
	UTaleQuestWaitForHandInStepDesc*                   Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStep"));
		return ptr;
	}

};


// Class Tales.TrackResponseCoordinatorStep
// 0x0008 (0x0098 - 0x0090)
class UTrackResponseCoordinatorStep : public UTaleQuestStep
{
public:
	UTrackResponseCoordinatorStepDesc*                 StepDesc;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TrackResponseCoordinatorStep"));
		return ptr;
	}

};


// Class Tales.WaitForItemPickupStep
// 0x0090 (0x0120 - 0x0090)
class UWaitForItemPickupStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0090(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForItemPickupStep"));
		return ptr;
	}

};


// Class Tales.AddGameEventExclusionZoneStepDesc
// 0x0018 (0x0098 - 0x0080)
class UAddGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	FQuestVariableVector                               Location;                                                 // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.AddGameEventExclusionZoneStepDesc"));
		return ptr;
	}

};


// Class Tales.CallObjectFunctionStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UCallObjectFunctionStepDesc : public UTaleQuestStepDesc
{
public:
	UObject*                                           Target;                                                   // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FClassFunctionSelectionType                        Function;                                                 // 0x0088(0x0010) (Edit)
	TMap<FName, FName>                                 ParameterMappings;                                        // 0x0098(0x0050) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.CallObjectFunctionStepDesc"));
		return ptr;
	}

};


// Class Tales.DestroySpawnedActorStepDesc
// 0x0010 (0x0090 - 0x0080)
class UDestroySpawnedActorStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                ActorVar;                                                 // 0x0080(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DestroySpawnedActorStepDesc"));
		return ptr;
	}

};


// Class Tales.DoEQSQueryStepDesc
// 0x0018 (0x0098 - 0x0080)
class UDoEQSQueryStepDesc : public UTaleQuestStepDesc
{
public:
	UEnvQuery*                                         EQSQuery;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableArray                                OutPoints;                                                // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DoEQSQueryStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStepDescBase
// 0x0050 (0x00D0 - 0x0080)
class UFindNamedPointStepDescBase : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET
	FQuestVariableActor                                ActorToSearch;                                            // 0x00A0(0x0010) (Edit)
	FQuestVariableName                                 GroupNamePin;                                             // 0x00B0(0x0010) (Edit)
	FName                                              PointGroupName;                                           // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPointSelectionMethod>                 SearchMethod;                                             // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpaceType>                            ReturnInSpace;                                            // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStepDescBase"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStepDesc
// 0x0010 (0x00E0 - 0x00D0)
class UFindNamedPointStepDesc : public UFindNamedPointStepDescBase
{
public:
	FQuestVariableOrientedPoint                        OutputOrientedPoint;                                      // 0x00D0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsVectorStepDesc
// 0x0010 (0x00E0 - 0x00D0)
class UFindNamedPointAsVectorStepDesc : public UFindNamedPointStepDescBase
{
public:
	FQuestVariableVector                               OutputVectorLocation;                                     // 0x00D0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsVectorStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsTransformStepDesc
// 0x0018 (0x00E8 - 0x00D0)
class UFindNamedPointAsTransformStepDesc : public UFindNamedPointStepDescBase
{
public:
	FQuestVariableTransform                            OutputTransform;                                          // 0x00D0(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsTransformStepDesc"));
		return ptr;
	}

};


// Class Tales.GenerateDigLocationInRadiusStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UGenerateDigLocationInRadiusStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableName                                 IslandName;                                               // 0x0080(0x0010) (Edit)
	FQuestVariableVector                               Center;                                                   // 0x0090(0x0010) (Edit)
	float                                              RadiusInCm;                                               // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	FQuestVariableVector                               DigLocation;                                              // 0x00A8(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GenerateDigLocationInRadiusStepDesc"));
		return ptr;
	}

};


// Class Tales.InvokeDamageDesc
// 0x0020 (0x00A0 - 0x0080)
class UInvokeDamageDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                ActorToDamage;                                            // 0x0080(0x0010) (Edit)
	UClass*                                            DamageType;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  DamageReason;                                             // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.InvokeDamageDesc"));
		return ptr;
	}

};


// Class Tales.LinkEQSContextWithVariableStepDesc
// 0x0018 (0x0098 - 0x0080)
class ULinkEQSContextWithVariableStepDesc : public UTaleQuestStepDesc
{
public:
	UClass*                                            Context;                                                  // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableSetEQSTaleContextValue               Variable;                                                 // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LinkEQSContextWithVariableStepDesc"));
		return ptr;
	}

};


// Class Tales.LoadSequencerAnimationStepDesc
// 0x0050 (0x00D0 - 0x0080)
class ULoadSequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<ULevelSequence*>                            LevelSequencesToLoad;                                     // 0x0080(0x0010) (Edit, ZeroConstructor)
	FQuestVariableActor                                TargetActorToSpawn;                                       // 0x0090(0x0010) (Edit)
	FQuestVariableActor                                LevelSequenceActorSpawnLocation;                          // 0x00A0(0x0010) (Edit)
	FQuestVariableActor                                SequencerCutSceneActor;                                   // 0x00B0(0x0010) (Edit)
	bool                                               AttachToTargetActor;                                      // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	FName                                              AttachSocketName;                                         // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayGlobally;                                             // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LoadSequencerAnimationStepDesc"));
		return ptr;
	}

};


// Class Tales.ParticipantRadiusTrackerStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UParticipantRadiusTrackerStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              DurationBetweenChecks;                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	FQuestVariableVector                               Location;                                                 // 0x0088(0x0010) (Edit)
	FQuestVariableFloat                                Radius;                                                   // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ParticipantRadiusTrackerStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitUntilAllParticipantsEnterRadiusStep
// 0x0000 (0x00A8 - 0x00A8)
class UWaitUntilAllParticipantsEnterRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAllParticipantsEnterRadiusStep"));
		return ptr;
	}

};


// Class Tales.WaitUntilAllParticipantsLeaveRadiusStep
// 0x0000 (0x00A8 - 0x00A8)
class UWaitUntilAllParticipantsLeaveRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAllParticipantsLeaveRadiusStep"));
		return ptr;
	}

};


// Class Tales.WaitUntilAnyParticipantEntersRadiusStep
// 0x0000 (0x00A8 - 0x00A8)
class UWaitUntilAnyParticipantEntersRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAnyParticipantEntersRadiusStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc
// 0x0098 (0x0118 - 0x0080)
class UPlaySequencerAnimationOnCutsceneActorStepDesc : public UTaleQuestStepDesc
{
public:
	ULevelSequence*                                    LevelSequence;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	FQuestVariableActor                                DockableBaseActor;                                        // 0x0090(0x0010) (Edit)
	FQuestVariableActor                                SequencerCutSceneActor;                                   // 0x00A0(0x0010) (Edit)
	FQuestVariableActor                                ActorToPossess;                                           // 0x00B0(0x0010) (Edit)
	FQuestVariableArray                                AdditionalPossessables;                                   // 0x00C0(0x0010) (Edit)
	FQuestVariableActor                                InteractingActor;                                         // 0x00D0(0x0010) (Edit)
	FString                                            PossessableName;                                          // 0x00E0(0x0010) (Edit, ZeroConstructor)
	USceneDialogueData*                                DialogueData;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FText>                                      LocalisableNames;                                         // 0x00F8(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLevelSequenceActorAlwaysRelevant;                       // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsLooping;                                                // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	float                                              SubtitleSphereRadiusInCm;                                 // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ULevelSequence*                                    FemaleLevelSequence;                                      // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationStepDesc
// 0x0078 (0x00F8 - 0x0080)
class UPlaySequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	ULevelSequence*                                    LevelSequenceToPlay;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableActor                                TargetActorToSpawn;                                       // 0x0088(0x0010) (Edit)
	FQuestVariableActor                                LevelSequenceActorSpawnLocation;                          // 0x0098(0x0010) (Edit)
	FQuestVariableActor                                DockableBaseActor;                                        // 0x00A8(0x0010) (Edit)
	FQuestVariableActor                                InteractingActor;                                         // 0x00B8(0x0010) (Edit)
	bool                                               PlayGlobally;                                             // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsLevelSequenceActorAlawaysRelevant;                      // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	USceneDialogueData*                                DialogueData;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FText>                                      LocalisableNames;                                         // 0x00D8(0x0010) (Edit, ZeroConstructor)
	bool                                               IsLooping;                                                // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              SubtitleSphereRadiusInCm;                                 // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ULevelSequence*                                    FemaleLevelSequenceToPlay;                                // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationStepDesc"));
		return ptr;
	}

};


// Class Tales.ProvokeHitReactionDesc
// 0x0020 (0x00A0 - 0x0080)
class UProvokeHitReactionDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                ActorToProvoke;                                           // 0x0080(0x0010) (Edit)
	UClass*                                            DamageType;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  DamageReason;                                             // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ProvokeHitReactionDesc"));
		return ptr;
	}

};


// Class Tales.RemoveGameEventExclusionZoneStepDesc
// 0x0018 (0x0098 - 0x0080)
class URemoveGameEventExclusionZoneStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              Radius;                                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	FQuestVariableVector                               Location;                                                 // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.RemoveGameEventExclusionZoneStepDesc"));
		return ptr;
	}

};


// Class Tales.SetEQSNamedContextStepDesc
// 0x0018 (0x0098 - 0x0080)
class USetEQSNamedContextStepDesc : public UTaleQuestStepDesc
{
public:
	FName                                              Name;                                                     // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableLinkEQSContext                       Value;                                                    // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SetEQSNamedContextStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
// 0x0070 (0x00F0 - 0x0080)
class USpawnPhasedActorWithTransformStepBaseDesc : public UTaleQuestStepDesc
{
public:
	TAssetPtr<class UClass>                            Actor;                                                    // 0x0080(0x0020) (Edit)
	bool                                               MarkAsCritical;                                           // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	FText                                              CriticalActorLostMessage;                                 // 0x00A8(0x0038) (Edit)
	FQuestVariableActor                                ActorVar;                                                 // 0x00E0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorWithTransformStepBaseDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorAtLocationStepDesc
// 0x0018 (0x0108 - 0x00F0)
class USpawnPhasedActorAtLocationStepDesc : public USpawnPhasedActorWithTransformStepBaseDesc
{
public:
	FQuestVariableTransform                            Location;                                                 // 0x00F0(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorAtLocationStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedItemStepDesc
// 0x0078 (0x00F8 - 0x0080)
class USpawnPhasedItemStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               TrackItem;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MarkItemAsCritical;                                       // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	FText                                              CriticalActorLostMessage;                                 // 0x0088(0x0038) (Edit)
	FName                                              SocketName;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableItemDescType                         Item;                                                     // 0x00C8(0x0010) (Edit)
	FQuestVariableActor                                LocatorVar;                                               // 0x00D8(0x0010) (Edit)
	FQuestVariableItemInfo                             SpawnedItemVar;                                           // 0x00E8(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedItemStepDesc"));
		return ptr;
	}

};


// Class Tales.StartSuppressingCutsceneResponsesStepDesc
// 0x0000 (0x0080 - 0x0080)
class UStartSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StartSuppressingCutsceneResponsesStepDesc"));
		return ptr;
	}

};


// Class Tales.StopSuppressingCutsceneResponsesStepDesc
// 0x0000 (0x0080 - 0x0080)
class UStopSuppressingCutsceneResponsesStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.StopSuppressingCutsceneResponsesStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestChooseIslandFromWeightsStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UTaleQuestChooseIslandFromWeightsStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableNameArray                            IslandsToChooseFrom;                                      // 0x0080(0x0010) (Edit)
	FQuestVariableInt                                  DifficultyRank;                                           // 0x0090(0x0010) (Edit)
	FQuestVariableName                                 ChosenIsland;                                             // 0x00A0(0x0010) (Edit)
	UIslandTypeWeightsDataAsset*                       IslandTypeWeights;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestChooseIslandFromWeightsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestClearTaleProposalsStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestClearTaleProposalsStepDesc : public UTaleQuestStepDesc
{
public:
	FName                                              CampaignId;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestClearTaleProposalsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	FRewardId                                          RewardId;                                                 // 0x0080(0x0008) (Edit)
	UClass*                                            Company;                                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FGuid                                              Id;                                                       // 0x0090(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldGrantToAlliedCrews;                                 // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	FName                                              Feature;                                                  // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestPermanentPromptStepDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestPermanentPromptStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariablePrioritisedPrompt                    Prompt;                                                   // 0x0080(0x0010) (Edit)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPermanentPromptStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectEntryFromArrayStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestSelectEntryFromArrayStepDesc : public UTaleQuestStepDesc
{
public:
	UTaleQuestArrayEntrySelectionStrategy*             SelectionStrategy;                                        // 0x0080(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FQuestVariableArray                                InputArray;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableAny                                  OutputEntry;                                              // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectEntryFromArrayStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateCheckpointStepDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestUpdateCheckpointStepDesc : public UTaleQuestStepDesc
{
public:
	FRewardId                                          RewardIdToAward;                                          // 0x0080(0x0008) (Edit)
	FName                                              CampaignIdToRemove;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FName                                              Feature;                                                  // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateCheckpointStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                HandInActor;                                              // 0x0080(0x0010) (Edit)
	UClass*                                            SpecificItem;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableItemDescType                         HandInItem;                                               // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStepDesc"));
		return ptr;
	}

};


// Class Tales.TrackResponseCoordinatorStepDesc
// 0x0010 (0x0090 - 0x0080)
class UTrackResponseCoordinatorStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableUObject                              CutsceneResponseCoordinator;                              // 0x0080(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TrackResponseCoordinatorStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitForItemPickupStepDesc
// 0x0020 (0x00A0 - 0x0080)
class UWaitForItemPickupStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                Item;                                                     // 0x0080(0x0010) (Edit)
	FQuestVariableActor                                PickerUpper;                                              // 0x0090(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForItemPickupStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep
// 0x0158 (0x01E8 - 0x0090)
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0090(0x0038) MISSED OFFSET
	UTaleQuestSelectorService*                         CachedSelectorService;                                    // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x118];                                     // 0x00D0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc : public UTaleQuestStepDesc
{
public:
	UTaleQuestArrayEntrySelectionStrategy*             SelectionStrategy;                                        // 0x0080(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	FQuestVariableVectorArray                          InputArray;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableVector                               OutputEntry;                                              // 0x0098(0x0010) (Edit)
	FQuestVariableBool                                 ShuffleLists;                                             // 0x00A8(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddBountyMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddBountyMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddBountyMapStepDesc
// 0x0068 (0x00E8 - 0x0080)
class UTaleQuestAddBountyMapStepDesc : public UTaleQuestStepDesc
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableName                                 IslandName;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableText                                 Location;                                                 // 0x0098(0x0010) (Edit)
	FQuestVariableTextArray                            Description;                                              // 0x00A8(0x0010) (Edit)
	FQuestVariableBountyTargetArray                    CaptainTargets;                                           // 0x00B8(0x0010) (Edit)
	FQuestVariableBountyTargetArray                    CrewTargets;                                              // 0x00C8(0x0010) (Edit)
	UBountyMapLayout*                                  CustomLayout;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UClass*                                            OverrideTreasureMapItemDesc;                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCargoRunMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddCargoRunMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCargoRunMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCircleMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddCircleMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCircleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddMerchantMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddMerchantMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddRiddleMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddXMarksMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAddXMarksMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddXMarksMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAdvanceRiddleMapStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestAdvanceRiddleMapStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestMapService
// 0x0090 (0x00F0 - 0x0060)
class UTaleQuestMapService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0060(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMapService"));
		return ptr;
	}


	void UpdateMerchantMap(const FName& MapId, int Index, const FTaleQuestDeliverableItem& Deliverable);
	void AdvanceRiddleMap(const FName& MapId);
};


// Class Tales.TaleQuestMapServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestMapServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMapServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCargoRunMapStepDesc
// 0x0040 (0x00C0 - 0x0080)
class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableName                                 IslandName;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableInt                                  NumItems;                                                 // 0x0098(0x0010) (Edit)
	FQuestVariableGuid                                 NPCId;                                                    // 0x00A8(0x0010) (Edit)
	UCargoRunMapLayout*                                Layout;                                                   // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCargoRunMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCircleMapStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestAddCircleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableName                                 IslandName;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableVector                               Location;                                                 // 0x0098(0x0010) (Edit)
	float                                              CircleScale;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestMapIcon>                         RadialMiniIcon;                                           // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCircleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddMerchantMapStepDesc
// 0x0050 (0x00D0 - 0x0080)
class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableName                                 IslandName;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableText                                 DeliveryLocation;                                         // 0x0098(0x0010) (Edit)
	FQuestVariableText                                 DeliverByTime;                                            // 0x00A8(0x0010) (Edit)
	FQuestVariableMerchantItemArray                    Items;                                                    // 0x00B8(0x0010) (Edit)
	UMerchantMapLayout*                                Layout;                                                   // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableName                                 IslandName;                                               // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapBaseStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapStepDesc
// 0x0010 (0x00A8 - 0x0098)
class UTaleQuestAddRiddleMapStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	TArray<FText>                                      Text;                                                     // 0x0098(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
// 0x0010 (0x00A8 - 0x0098)
class UTaleQuestAddRiddleMapUsingVariableStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	FQuestVariableTextArray                            TextVariable;                                             // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddXMarksMapStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableName                                 IslandName;                                               // 0x0088(0x0010) (Edit)
	FQuestVariableVector                               Location;                                                 // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddXMarksMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAdvanceRiddleMapStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestRemoveMapStep
// 0x0008 (0x0098 - 0x0090)
class UTaleQuestRemoveMapStep : public UTaleQuestStep
{
public:
	UTaleQuestRemoveMapStepDesc*                       StepDesc;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRemoveMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestRemoveMapStepDesc
// 0x0018 (0x0098 - 0x0080)
class UTaleQuestRemoveMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableVector                               Location;                                                 // 0x0088(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRemoveMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateMerchantMapStep
// 0x0008 (0x0098 - 0x0090)
class UTaleQuestUpdateMerchantMapStep : public UTaleQuestStep
{
public:
	UTaleQuestUpdateMerchantMapStepDesc*               Desc;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateMerchantMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// 0x0028 (0x00A8 - 0x0080)
class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	FName                                              MapId;                                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FQuestVariableMerchantItem                         Item;                                                     // 0x0088(0x0010) (Edit)
	FQuestVariableInt                                  Index;                                                    // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateMerchantMapStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
