#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0040 (0x0068 - 0x0028)
class UTaleQuestStep : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestStepDesc
// 0x0008 (0x0030 - 0x0028)
class UTaleQuestStepDesc : public UObject
{
public:
	bool                                               Fork;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestService
// 0x0018 (0x0040 - 0x0028)
class UTaleQuestService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

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


// Class Tales.TaleQuestFramedStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestFramedStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class UTaleQuestFramedStepDesc*                    FrameDesc;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UTaleQuestService*>                   Services;                                                 // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UScriptStruct*                               StructForCollector;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFramedStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestFramedStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestFramedStepDesc : public UTaleQuestStepDesc
{
public:
	TArray<class UTaleQuestServiceDesc*>               Services;                                                 // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UScriptStruct*                               Variables;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	TArray<struct FIslandTypeWeights>                  IslandTypeWeightsForDifficultyRanks;                      // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.IslandTypeWeightsDataAsset"));
		return ptr;
	}

};


// Class Tales.SplineFootprintPathComponent
// 0x0030 (0x0620 - 0x05F0)
class USplineFootprintPathComponent : public USplineComponent
{
public:
	float                                              DistanceBetweenDecals;                                    // 0x05F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DecalMaterial;                                            // 0x05F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSplineFootprintPathTool                    PathTool;                                                 // 0x0600(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0601(0x0003) MISSED OFFSET
	float                                              DecalYaw;                                                 // 0x0604(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DecalUniformScale;                                        // 0x0608(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0614(0x000C) MISSED OFFSET

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


// Class Tales.TaleQuestCargoRunContract
// 0x0088 (0x00B0 - 0x0028)
class UTaleQuestCargoRunContract : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FTaleQuestCargoRunContractItem>      ItemsToCollect;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	class AActor*                                      DeliverToNPC;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CollectFromNPC;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContract"));
		return ptr;
	}

};


// Class Tales.TaleQuestCargoRunContractsService
// 0x0048 (0x0088 - 0x0040)
class UTaleQuestCargoRunContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestCargoRunContract*>          Contracts;                                                // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestCargoRunContractsService"));
		return ptr;
	}


	class UTaleQuestCargoRunContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes);
};


// Class Tales.TaleQuestMerchantContract
// 0x0060 (0x0088 - 0x0028)
class UTaleQuestMerchantContract : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExpired;                                                // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDelivered;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollected;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllocated;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContract"));
		return ptr;
	}

};


// Class Tales.TaleQuestMerchantContractsService
// 0x0010 (0x0050 - 0x0040)
class UTaleQuestMerchantContractsService : public UTaleQuestService
{
public:
	TArray<class UTaleQuestMerchantContract*>          Contracts;                                                // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMerchantContractsService"));
		return ptr;
	}


	class UTaleQuestMerchantContract* GetContract(const struct FGuid& Guid);
	struct FGuid AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit);
};


// Class Tales.SuppressCutsceneResponsesTaleService
// 0x0010 (0x0050 - 0x0040)
class USuppressCutsceneResponsesTaleService : public UTaleQuestService
{
public:
	TArray<TScriptInterface<class UCutsceneResponsePlayerInterface>> TrackedResponsePlayers;                                   // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SuppressCutsceneResponsesTaleService"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorService
// 0x00D0 (0x0110 - 0x0040)
class UTaleQuestActorService : public UTaleQuestService
{
public:
	TArray<class AActor*>                              TrackedActors;                                            // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FCriticalActorDelegateData>          CriticalActors;                                           // 0x0050(0x0010) (ZeroConstructor)
	class UTaleQuestActorServiceDesc*                  Desc;                                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class APhasedClusterRoot*                          PhasedClusterRoot;                                        // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPhasedActor>                        PhasedActors;                                             // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FPhasedItem>                         PhasedItems;                                              // 0x0080(0x0010) (ZeroConstructor)
	struct FText                                       CriticalActorHandedInByAnotherCrewFailureMessage;         // 0x0090(0x0038)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestActorService"));
		return ptr;
	}

};


// Class Tales.TaleQuestEQSService
// 0x00F8 (0x0138 - 0x0040)
class UTaleQuestEQSService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0040(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEQSService"));
		return ptr;
	}

};


// Class Tales.TaleQuestFlameOfFateService
// 0x0060 (0x00A0 - 0x0040)
class UTaleQuestFlameOfFateService : public UTaleQuestService
{
public:
	class UTaleQuestFlameOfFateServiceDesc*            ServiceDesc;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestFlameOfFateService"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectorService
// 0x0028 (0x0068 - 0x0040)
class UTaleQuestSelectorService : public UTaleQuestService
{
public:
	class UTaleQuestSelectorServiceDesc*               Desc;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectorService"));
		return ptr;
	}

};


// Class Tales.SuppressCutsceneResponsesTaleServiceDesc
// 0x0000 (0x0028 - 0x0028)
class USuppressCutsceneResponsesTaleServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SuppressCutsceneResponsesTaleServiceDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestActorServiceDesc
// 0x0008 (0x0030 - 0x0028)
class UTaleQuestActorServiceDesc : public UTaleQuestServiceDesc
{
public:
	class UClass*                                      ItemLostFailureRunnable;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
	class UClass*                                      LanternItemCategory;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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


// Class Tales.AddResponsePlayerToSuppressionListStep
// 0x0008 (0x0070 - 0x0068)
class UAddResponsePlayerToSuppressionListStep : public UTaleQuestStep
{
public:
	class UAddResponsePlayerToSuppressionListStepDesc* StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.AddResponsePlayerToSuppressionListStep"));
		return ptr;
	}

};


// Class Tales.DestroySpawnedActorStep
// 0x0008 (0x0070 - 0x0068)
class UDestroySpawnedActorStep : public UTaleQuestStep
{
public:
	class UDestroySpawnedActorStepDesc*                Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DestroySpawnedActorStep"));
		return ptr;
	}

};


// Class Tales.DoEQSQueryStep
// 0x0010 (0x0078 - 0x0068)
class UDoEQSQueryStep : public UTaleQuestStep
{
public:
	class UDoEQSQueryStepDesc*                         Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTaleQuestEQSService*                        CachedTaleEQSService;                                     // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DoEQSQueryStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStep
// 0x0008 (0x0070 - 0x0068)
class UFindNamedPointStep : public UTaleQuestStep
{
public:
	class UFindNamedPointStepDesc*                     StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsVectorStep
// 0x0008 (0x0070 - 0x0068)
class UFindNamedPointAsVectorStep : public UTaleQuestStep
{
public:
	class UFindNamedPointAsVectorStepDesc*             StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsVectorStep"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsTransformStep
// 0x0008 (0x0070 - 0x0068)
class UFindNamedPointAsTransformStep : public UTaleQuestStep
{
public:
	class UFindNamedPointAsTransformStepDesc*          StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsTransformStep"));
		return ptr;
	}

};


// Class Tales.GenerateDigLocationInRadiusStep
// 0x0050 (0x00B8 - 0x0068)
class UGenerateDigLocationInRadiusStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GenerateDigLocationInRadiusStep"));
		return ptr;
	}

};


// Class Tales.GetVoyageDifficultyFromRankStep
// 0x0018 (0x0080 - 0x0068)
class UGetVoyageDifficultyFromRankStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GetVoyageDifficultyFromRankStep"));
		return ptr;
	}

};


// Class Tales.LinkEQSContextWithVariableStep
// 0x0008 (0x0070 - 0x0068)
class ULinkEQSContextWithVariableStep : public UTaleQuestStep
{
public:
	class ULinkEQSContextWithVariableStepDesc*         Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LinkEQSContextWithVariableStep"));
		return ptr;
	}

};


// Class Tales.ParticipantRadiusTrackerStep
// 0x0020 (0x0088 - 0x0068)
class UParticipantRadiusTrackerStep : public UTaleQuestStep
{
public:
	class UParticipantRadiusTrackerStepDesc*           Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ParticipantRadiusTrackerStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationStep
// 0x0018 (0x0080 - 0x0068)
class UPlaySequencerAnimationStep : public UTaleQuestStep
{
public:
	class UPlaySequencerAnimationStepDesc*             StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASequencerCutSceneActor*                     SequencerCutSceneActor;                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationStep"));
		return ptr;
	}

};


// Class Tales.SetEQSNamedContextStep
// 0x0008 (0x0070 - 0x0068)
class USetEQSNamedContextStep : public UTaleQuestStep
{
public:
	class USetEQSNamedContextStepDesc*                 Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SetEQSNamedContextStep"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorWithTransformStep
// 0x00A8 (0x0110 - 0x0068)
class USpawnPhasedActorWithTransformStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0068(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorWithTransformStep"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedItemStep
// 0x0000 (0x0068 - 0x0068)
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
// 0x0000 (0x0068 - 0x0068)
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
// 0x0000 (0x0068 - 0x0068)
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
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestChooseIslandFromWeightsStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                        // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestChooseIslandFromWeightsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestClearTaleProposalsStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestClearTaleProposalsStep : public UTaleQuestStep
{
public:
	class UTaleQuestClearTaleProposalsStepDesc*        Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestClearTaleProposalsStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestEmissaryCompanyActionRewardBoostStep : public UTaleQuestStep
{
public:
	class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestGrantRewardStep : public UTaleQuestStep
{
public:
	class UTaleQuestGrantRewardStepDesc*               Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestPermanentPromptStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestPermanentPromptStep : public UTaleQuestStep
{
public:
	class UTaleQuestPermanentPromptStepDesc*           Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPermanentPromptStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectEntryFromArrayStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestSelectEntryFromArrayStep : public UTaleQuestStep
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                        // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectEntryFromArrayStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateCheckpointStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestUpdateCheckpointStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateCheckpointStepDesc*          Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateCheckpointStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStep
// 0x0010 (0x0078 - 0x0068)
class UTaleQuestWaitForHandInStep : public UTaleQuestStep
{
public:
	class UTaleQuestWaitForHandInStepDesc*             Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStep"));
		return ptr;
	}

};


// Class Tales.WaitForItemPickupStep
// 0x0080 (0x00E8 - 0x0068)
class UWaitForItemPickupStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0068(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForItemPickupStep"));
		return ptr;
	}

};


// Class Tales.AddResponsePlayerToSuppressionListStepDesc
// 0x0010 (0x0040 - 0x0030)
class UAddResponsePlayerToSuppressionListStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableUObject                       CutsceneResponsePlayer;                                   // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.AddResponsePlayerToSuppressionListStepDesc"));
		return ptr;
	}

};


// Class Tales.DestroySpawnedActorStepDesc
// 0x0010 (0x0040 - 0x0030)
class UDestroySpawnedActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorVar;                                                 // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DestroySpawnedActorStepDesc"));
		return ptr;
	}

};


// Class Tales.DoEQSQueryStepDesc
// 0x0018 (0x0048 - 0x0030)
class UDoEQSQueryStepDesc : public UTaleQuestStepDesc
{
public:
	class UEnvQuery*                                   EQSQuery;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableArray                         OutPoints;                                                // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.DoEQSQueryStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStepDescBase
// 0x0040 (0x0070 - 0x0030)
class UFindNamedPointStepDescBase : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FQuestVariableActor                         ActorToSearch;                                            // 0x0050(0x0010) (Edit)
	struct FName                                       PointGroupName;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPointSelectionMethod>                 SearchMethod;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpaceType>                            ReturnInSpace;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStepDescBase"));
		return ptr;
	}

};


// Class Tales.FindNamedPointStepDesc
// 0x0010 (0x0080 - 0x0070)
class UFindNamedPointStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableOrientedPoint                 OutputOrientedPoint;                                      // 0x0070(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsVectorStepDesc
// 0x0010 (0x0080 - 0x0070)
class UFindNamedPointAsVectorStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableVector                        OutputVectorLocation;                                     // 0x0070(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsVectorStepDesc"));
		return ptr;
	}

};


// Class Tales.FindNamedPointAsTransformStepDesc
// 0x0010 (0x0080 - 0x0070)
class UFindNamedPointAsTransformStepDesc : public UFindNamedPointStepDescBase
{
public:
	struct FQuestVariableTransform                     OutputTransform;                                          // 0x0070(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.FindNamedPointAsTransformStepDesc"));
		return ptr;
	}

};


// Class Tales.GenerateDigLocationInRadiusStepDesc
// 0x0038 (0x0068 - 0x0030)
class UGenerateDigLocationInRadiusStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableVector                        Center;                                                   // 0x0040(0x0010) (Edit)
	float                                              RadiusInCm;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        DigLocation;                                              // 0x0058(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.GenerateDigLocationInRadiusStepDesc"));
		return ptr;
	}

};


// Class Tales.LinkEQSContextWithVariableStepDesc
// 0x0018 (0x0048 - 0x0030)
class ULinkEQSContextWithVariableStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      Context;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableSetEQSTaleContextValue        Variable;                                                 // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.LinkEQSContextWithVariableStepDesc"));
		return ptr;
	}

};


// Class Tales.ParticipantRadiusTrackerStepDesc
// 0x0028 (0x0058 - 0x0030)
class UParticipantRadiusTrackerStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              DurationBetweenChecks;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        Location;                                                 // 0x0038(0x0010) (Edit)
	struct FQuestVariableFloat                         Radius;                                                   // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.ParticipantRadiusTrackerStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitUntilAllParticipantsEnterRadiusStep
// 0x0000 (0x0058 - 0x0058)
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
// 0x0000 (0x0058 - 0x0058)
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
// 0x0000 (0x0058 - 0x0058)
class UWaitUntilAnyParticipantEntersRadiusStep : public UParticipantRadiusTrackerStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitUntilAnyParticipantEntersRadiusStep"));
		return ptr;
	}

};


// Class Tales.PlaySequencerAnimationStepDesc
// 0x0020 (0x0050 - 0x0030)
class UPlaySequencerAnimationStepDesc : public UTaleQuestStepDesc
{
public:
	class ULevelSequence*                              LevelSequenceToPlay;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         TargetActorToSpawn;                                       // 0x0038(0x0010) (Edit)
	bool                                               PlayGlobally;                                             // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.PlaySequencerAnimationStepDesc"));
		return ptr;
	}

};


// Class Tales.SetEQSNamedContextStepDesc
// 0x0018 (0x0048 - 0x0030)
class USetEQSNamedContextStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableLinkEQSContext                Value;                                                    // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SetEQSNamedContextStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorWithTransformStepBaseDesc
// 0x0070 (0x00A0 - 0x0030)
class USpawnPhasedActorWithTransformStepBaseDesc : public UTaleQuestStepDesc
{
public:
	TAssetPtr<class UClass>                            Actor;                                                    // 0x0030(0x0020) (Edit)
	bool                                               MarkAsCritical;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FText                                       CriticalActorLostMessage;                                 // 0x0058(0x0038) (Edit)
	struct FQuestVariableActor                         ActorVar;                                                 // 0x0090(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorWithTransformStepBaseDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedActorAtLocationStepDesc
// 0x0010 (0x00B0 - 0x00A0)
class USpawnPhasedActorAtLocationStepDesc : public USpawnPhasedActorWithTransformStepBaseDesc
{
public:
	struct FQuestVariableTransform                     Location;                                                 // 0x00A0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedActorAtLocationStepDesc"));
		return ptr;
	}

};


// Class Tales.SpawnPhasedItemStepDesc
// 0x0078 (0x00A8 - 0x0030)
class USpawnPhasedItemStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               TrackItem;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MarkItemAsCritical;                                       // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FText                                       CriticalActorLostMessage;                                 // 0x0038(0x0038) (Edit)
	struct FName                                       SocketName;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableItemDescType                  Item;                                                     // 0x0078(0x0010) (Edit)
	struct FQuestVariableActor                         LocatorVar;                                               // 0x0088(0x0010) (Edit)
	struct FQuestVariableItemInfo                      SpawnedItemVar;                                           // 0x0098(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.SpawnPhasedItemStepDesc"));
		return ptr;
	}

};


// Class Tales.StartSuppressingCutsceneResponsesStepDesc
// 0x0000 (0x0030 - 0x0030)
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
// 0x0000 (0x0030 - 0x0030)
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
// 0x0038 (0x0068 - 0x0030)
class UTaleQuestChooseIslandFromWeightsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableNameArray                     IslandsToChooseFrom;                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           DifficultyRank;                                           // 0x0040(0x0010) (Edit)
	struct FQuestVariableName                          ChosenIsland;                                             // 0x0050(0x0010) (Edit)
	class UIslandTypeWeightsDataAsset*                 IslandTypeWeights;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestChooseIslandFromWeightsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestClearTaleProposalsStepDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestClearTaleProposalsStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       CampaignId;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestClearTaleProposalsStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestEmissaryCompanyActionRewardBoostStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0030 (0x0060 - 0x0030)
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardId;                                                 // 0x0030(0x0008) (Edit)
	class UClass*                                      Company;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Id;                                                       // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldGrantToAlliedCrews;                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FName                                       Feature;                                                  // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestGrantRewardStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestPermanentPromptStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestPermanentPromptStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariablePrioritisedPrompt             Prompt;                                                   // 0x0030(0x0010) (Edit)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestPermanentPromptStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestSelectEntryFromArrayStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestSelectEntryFromArrayStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                        // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FQuestVariableArray                         InputArray;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableAny                           OutputEntry;                                              // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestSelectEntryFromArrayStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateCheckpointStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestUpdateCheckpointStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardIdToAward;                                          // 0x0030(0x0008) (Edit)
	struct FName                                       CampaignIdToRemove;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Feature;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateCheckpointStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestWaitForHandInStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestWaitForHandInStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         HandInActor;                                              // 0x0030(0x0010) (Edit)
	class UClass*                                      SpecificItem;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestWaitForHandInStepDesc"));
		return ptr;
	}

};


// Class Tales.WaitForItemPickupStepDesc
// 0x0010 (0x0040 - 0x0030)
class UWaitForItemPickupStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Item;                                                     // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.WaitForItemPickupStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddBountyMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAddBountyMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddBountyMapStepDesc*              Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddBountyMapStepDesc
// 0x0068 (0x0098 - 0x0030)
class UTaleQuestAddBountyMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          Location;                                                 // 0x0048(0x0010) (Edit)
	struct FQuestVariableTextArray                     Description;                                              // 0x0058(0x0010) (Edit)
	struct FQuestVariableBountyTargetArray             CaptainTargets;                                           // 0x0068(0x0010) (Edit)
	struct FQuestVariableBountyTargetArray             CrewTargets;                                              // 0x0078(0x0010) (Edit)
	class UBountyMapLayout*                            CustomLayout;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideTreasureMapItemDesc;                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCargoRunMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAddCargoRunMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddCargoRunMapStepDesc*            Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCargoRunMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddMerchantMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAddMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddMerchantMapStepDesc*            Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAddRiddleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddRiddleMapBaseStepDesc*          Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddXMarksMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAddXMarksMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAddXMarksMapStepDesc*              Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddXMarksMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestAdvanceRiddleMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAdvanceRiddleMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestAdvanceRiddleMapStepDesc*          Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestMapService
// 0x0080 (0x00C0 - 0x0040)
class UTaleQuestMapService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMapService"));
		return ptr;
	}


	void UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable);
	void AdvanceRiddleMap(const struct FName& MapId);
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
// 0x0040 (0x0070 - 0x0030)
class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           NumItems;                                                 // 0x0048(0x0010) (Edit)
	struct FQuestVariableGuid                          NPCId;                                                    // 0x0058(0x0010) (Edit)
	class UCargoRunMapLayout*                          Layout;                                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddCargoRunMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddMerchantMapStepDesc
// 0x0050 (0x0080 - 0x0030)
class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          DeliveryLocation;                                         // 0x0048(0x0010) (Edit)
	struct FQuestVariableText                          DeliverByTime;                                            // 0x0058(0x0010) (Edit)
	struct FQuestVariableMerchantItemArray             Items;                                                    // 0x0068(0x0010) (Edit)
	class UMerchantMapLayout*                          Layout;                                                   // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapBaseStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapStepDesc
// 0x0010 (0x0058 - 0x0048)
class UTaleQuestAddRiddleMapStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	TArray<struct FText>                               Text;                                                     // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc
// 0x0010 (0x0058 - 0x0048)
class UTaleQuestAddRiddleMapUsingVariableStepDesc : public UTaleQuestAddRiddleMapBaseStepDesc
{
public:
	struct FQuestVariableTextArray                     TextVariable;                                             // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddXMarksMapStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableVector                        Location;                                                 // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddXMarksMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAdvanceRiddleMapStepDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestRemoveMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestRemoveMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestRemoveMapStepDesc*                 StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRemoveMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestRemoveMapStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestRemoveMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableVector                        Location;                                                 // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestRemoveMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateMerchantMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestUpdateMerchantMapStep : public UTaleQuestStep
{
public:
	class UTaleQuestUpdateMerchantMapStepDesc*         Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestUpdateMerchantMapStep"));
		return ptr;
	}

};


// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableMerchantItem                  Item;                                                     // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           Index;                                                    // 0x0048(0x0010) (Edit)

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
