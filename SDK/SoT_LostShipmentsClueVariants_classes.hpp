#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueVariants_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor
// 0x0008 (0x0030 - 0x0028)
class UAbandonedNoteClueDescriptor : public UClueDescriptor
{
public:
	class UClueDestinationDescriptor*                  DestinationDescriptor;                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator
// 0x0000 (0x0030 - 0x0030)
class UAbandonedNoteClueDescriptorGenerator : public UClueDescriptorGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset
// 0x0018 (0x0040 - 0x0028)
class UAbandonedNoteClueTextAsset : public UDataAsset
{
public:
	class UClass*                                      DestinationType;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               Descriptions;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset
// 0x0010 (0x0038 - 0x0028)
class UAbandonedNoteClueTextIndexAsset : public UDataAsset
{
public:
	TArray<class UAbandonedNoteClueTextAsset*>         ClueDestinationDescriptions;                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAbandonedNoteClueTextSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextSourceInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ClueDestinationContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UClueDestinationContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ClueDestinationContainerInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent
// 0x00E8 (0x01B0 - 0x00C8)
class UAbandonedNoteClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UClueDestinationDescriptor*                  CurrentDestination;                                       // 0x00D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TAssetPtr<class UAbandonedNoteClueTextIndexAsset>  ClueTextIndexAsset;                                       // 0x00E0(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0100(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent"));
		return ptr;
	}


	void OnRep_CurrentDestination();
};


// Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent
// 0x0068 (0x0130 - 0x00C8)
class UAbandonedNoteWieldableRenderingComponent : public UActorComponent
{
public:
	int                                                CanvasWidth;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontLineSpacing;                                          // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetText                      TextBodyLayout;                                           // 0x00E0(0x0020) (Edit, DisableEditOnInstance)
	TScriptInterface<class UWieldableItemCanvasRenderingInterface> WieldableRenderingInterface;                              // 0x0100(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteWieldable
// 0x0020 (0x0820 - 0x0800)
class AAbandonedNoteWieldable : public ASkeletalMeshWieldableItem
{
public:
	class UWieldableItemCanvasRenderingComponent*      WieldableItemCanvasRenderingComponent;                    // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAbandonedNoteWieldableRenderingComponent*   AbandonedNoteRenderingComponent;                          // 0x0808(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldable"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UClueVariantsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary"));
		return ptr;
	}


	static void GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue);
};


// Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor
// 0x0000 (0x0028 - 0x0028)
class UEndOfGooseChaseClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGooseChaseClueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary"));
		return ptr;
	}


	static class UClueDescriptor* CreateEndOfGooseChaseClue();
};


// Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor
// 0x0008 (0x0030 - 0x0028)
class UIslandByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FName                                       IslandIdentifier;                                         // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.NPCHintDialogueClueCreator
// 0x0000 (0x0030 - 0x0030)
class UNPCHintDialogueClueCreator : public ULandClueCreator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.NPCHintDialogueClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator
// 0x0000 (0x0028 - 0x0028)
class UNPCHintDialogueClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData
// 0x00B0 (0x00D8 - 0x0028)
class UNPCHintDialogueClueSiteData : public UClueSiteData
{
public:
	struct FNPCData                                    NPCData;                                                  // 0x0028(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.NPCHintDialogueClueSiteData"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UNPCHintDialogueClueSiteType : public UClueSiteType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.NPCHintDialogueClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ObtainClueOnWieldComponent
// 0x0008 (0x0140 - 0x0138)
class UObtainClueOnWieldComponent : public UOnItemWieldedComponent
{
public:
	class UClueDescriptor*                             ClueToObtain;                                             // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ObtainClueOnWieldComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestClueInventoryService
// 0x00E8 (0x0128 - 0x0040)
class UTaleQuestClueInventoryService : public UTaleQuestService
{
public:
	TArray<class UClueDescriptor*>                     ObtainedClues;                                            // 0x0040(0x0010) (ZeroConstructor, Transient)
	TAssetPtr<class UClass>                            AbandonedNoteDesc;                                        // 0x0050(0x0020) (Transient)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0070(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestClueInventoryService"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc
// 0x0020 (0x0048 - 0x0028)
class UTaleQuestClueInventoryServiceDesc : public UTaleQuestServiceDesc
{
public:
	TAssetPtr<class UClass>                            AbandonedNoteItem;                                        // 0x0028(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestSpawnWashedUpMessageInABottleClueStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc
// 0x0030 (0x0060 - 0x0030)
class UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueDescriptor                ClueDescriptor;                                           // 0x0040(0x0010) (Edit)
	struct FQuestVariableItemInfo                      MessageInABottle;                                         // 0x0050(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator
// 0x0020 (0x0050 - 0x0030)
class UWashedUpMessageInABottleClueCreator : public ULandClueCreator
{
public:
	TAssetPtr<class UClass>                            MessageInABottleItem;                                     // 0x0030(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator
// 0x0000 (0x0028 - 0x0028)
class UWashedUpMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData
// 0x0058 (0x0080 - 0x0028)
class UWashedUpMessageInABottleClueSiteData : public UClueSiteData
{
public:
	class UClass*                                      BottleItemType;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandNameToSpawnOn;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       IslandSpawnLocationReservationId;                         // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0050(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteData"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UWashedUpMessageInABottleClueSiteType : public UClueSiteType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueSiteType"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
