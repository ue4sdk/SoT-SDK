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


// Class Tales.TaleQuestMapService
// 0x0050 (0x0090 - 0x0040)
class UTaleQuestMapService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestMapService"));
		return ptr;
	}


	void UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable);
	void AdvanceRiddleMap(const struct FName& MapId);
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


// Class Tales.TaleQuestAddBountyMapStepDesc
// 0x0060 (0x0090 - 0x0030)
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

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddBountyMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddCargoRunMapStepDesc
// 0x0040 (0x0070 - 0x0030)
class UTaleQuestAddCargoRunMapStepDesc : public UTaleQuestStepDesc
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
// 0x0060 (0x0090 - 0x0030)
class UTaleQuestAddMerchantMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableName                          IslandName;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableText                          DeliveryLocation;                                         // 0x0048(0x0010) (Edit)
	struct FQuestVariableText                          DeliverByTime;                                            // 0x0058(0x0010) (Edit)
	struct FQuestVariableText                          Haul;                                                     // 0x0068(0x0010) (Edit)
	struct FQuestVariableMerchantItemArray             Items;                                                    // 0x0078(0x0010) (Edit)
	class UMerchantMapLayout*                          Layout;                                                   // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAddMerchantMapStepDesc"));
		return ptr;
	}

};


// Class Tales.TaleQuestAddRiddleMapBaseStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestAddRiddleMapBaseStepDesc : public UTaleQuestStepDesc
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
class UTaleQuestAddXMarksMapStepDesc : public UTaleQuestStepDesc
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
class UTaleQuestAdvanceRiddleMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FName                                       MapId;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tales.TaleQuestAdvanceRiddleMapStepDesc"));
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


// Class Tales.TaleQuestGrantRewardStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestGrantRewardStepDesc : public UTaleQuestStepDesc
{
public:
	struct FRewardId                                   RewardId;                                                 // 0x0030(0x0008) (Edit)
	class UClass*                                      Company;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Id;                                                       // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

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


// Class Tales.TaleQuestRemoveMapStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestRemoveMapStepDesc : public UTaleQuestStepDesc
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


// Class Tales.TaleQuestUpdateMerchantMapStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestUpdateMerchantMapStepDesc : public UTaleQuestStepDesc
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
