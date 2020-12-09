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
	class UClueDestinationDescriptor*                  DestinationDescriptor;                                    // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueDescriptorGenerator
// 0x0000 (0x0040 - 0x0040)
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
	TArray<struct FText>                               Descriptions;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DestinationType;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase
// 0x0000 (0x0028 - 0x0028)
class UAbandonedNoteClueTextIndexAssetBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetBase"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap
// 0x0010 (0x0038 - 0x0028)
class UAbandonedNoteClueTextIndexAssetMap : public UDataAsset
{
public:
	TArray<struct FClueDestinationToTextIndex>         TextIndexMappings;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAssetMap"));
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
// 0x00D0 (0x0198 - 0x00C8)
class UAbandonedNoteClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UClueDestinationDescriptor*                  CurrentDestination;                                       // 0x00D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UAbandonedNoteClueTextIndexAssetMap*         ClueTextIndexAssetMap;                                    // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x00E8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent"));
		return ptr;
	}


	void OnRep_CurrentDestination();
};


// Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor
// 0x0010 (0x0038 - 0x0028)
class UNPCByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FGuid                                       NPCIdentifier;                                            // 0x0028(0x0010) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset
// 0x0018 (0x0040 - 0x0028)
class UAbandonedNoteClueGenderSpecificTextAsset : public UDataAsset
{
public:
	TArray<struct FGenderSpecificTextPairings>         Descriptions;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DestinationType;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset
// 0x0010 (0x0038 - 0x0028)
class UAbandonedNoteClueGenderSpecificTextIndexAsset : public UAbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class UAbandonedNoteClueGenderSpecificTextAsset*> ClueDestinationDescriptions;                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueGenderSpecificTextIndexAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset
// 0x0010 (0x0038 - 0x0028)
class UAbandonedNoteClueTextIndexAsset : public UAbandonedNoteClueTextIndexAssetBase
{
public:
	TArray<class UAbandonedNoteClueTextAsset*>         ClueDestinationDescriptions;                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset"));
		return ptr;
	}

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
// 0x0020 (0x0830 - 0x0810)
class AAbandonedNoteWieldable : public ASkeletalMeshWieldableItem
{
public:
	class UWieldableItemCanvasRenderingComponent*      WieldableItemCanvasRenderingComponent;                    // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAbandonedNoteWieldableRenderingComponent*   AbandonedNoteRenderingComponent;                          // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0828(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldable"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator
// 0x0000 (0x0028 - 0x0028)
class UBarrelsOfPlentyClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UBarrelsOfPlentyClueSiteType : public UClueSiteType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator
// 0x0000 (0x0030 - 0x0030)
class UBarrelsOfPlentySeaClueCreator : public USeaClueCreator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator"));
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


// Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap
// 0x0010 (0x0038 - 0x0028)
class UExistingToPhasedNPCIndexAssetMap : public UDataAsset
{
public:
	TArray<struct FExistingNPCToPhasedNPC>             NPCIndexMappings;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator
// 0x0000 (0x0028 - 0x0028)
class UFloatingMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UFloatingMessageInABottleClueSiteType : public UClueSiteType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator
// 0x0000 (0x0030 - 0x0030)
class UFloatingMessageInABottleSeaClueCreator : public USeaClueCreator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.FloatingMessageInABottleSeaClueCreator"));
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


// Class LostShipmentsClueVariants.InteractableGrammaticalGenderInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableGrammaticalGenderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.InteractableGrammaticalGenderInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent
// 0x0010 (0x00D8 - 0x00C8)
class UInteractableGrammaticalGenderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TEnumAsByte<EInteractableGrammaticalGender>        GrammaticalGender;                                        // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.InteractableGrammaticalGenderComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor
// 0x0008 (0x0030 - 0x0028)
class UIslandByCompassBearingClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	TEnumAsByte<ECompassDirections>                    CompassDirection;                                         // 0x0028(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor"));
		return ptr;
	}

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


// Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface
// 0x0000 (0x0028 - 0x0028)
class UMerchantCaptainSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.MerchantCaptainSpawnInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent
// 0x0010 (0x0440 - 0x0430)
class UMerchantCaptainSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent"));
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
// 0x0018 (0x0150 - 0x0138)
class UObtainClueOnWieldComponent : public UOnItemWieldedComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	class UClueDescriptor*                             ClueToObtain;                                             // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ClueSiteType;                                             // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ObtainClueOnWieldComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent
// 0x0070 (0x01C0 - 0x0150)
class UObtainClueFromContainerOnWieldComponent : public UObtainClueOnWieldComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0150(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ObtainClueFromContainerOnWieldComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor
// 0x0010 (0x0038 - 0x0028)
class USeaLocationByGridSquareClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	struct FVector                                     SeaLocationIdentifier;                                    // 0x0028(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.SeaLocationByGridSquareClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UShipwreckClueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary"));
		return ptr;
	}


	static class UClueDescriptor* CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck);
};


// Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor
// 0x0000 (0x0028 - 0x0028)
class UShipwreckClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator
// 0x0000 (0x0028 - 0x0028)
class UShipwreckClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ShipwreckClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ShipwreckClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UShipwreckClueSiteType : public UClueSiteType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ShipwreckClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestClueInventoryService
// 0x0130 (0x0170 - 0x0040)
class UTaleQuestClueInventoryService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET
	TArray<class UClueDescriptor*>                     ObtainedClues;                                            // 0x0088(0x0010) (ZeroConstructor, Transient)
	TAssetPtr<class UClass>                            AbandonedNoteDesc;                                        // 0x0098(0x0020) (Transient)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x00B8(0x00B8) MISSED OFFSET

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


// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestGetNPCActorFromClueSiteStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestGetNPCActorFromClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         NPCFromClueSite;                                          // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestGetPhasedVersionOfActorFromAssetMapStep : public UTaleQuestStep
{
public:
	class UExistingToPhasedNPCIndexAssetMap*           NPCIndexAssetMap;                                         // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ExistingNPCActor;                                         // 0x0030(0x0010) (Edit)
	struct FQuestVariableActorAssetType                ObtainedPhasedNPCActorType;                               // 0x0040(0x0010) (Edit)
	class UExistingToPhasedNPCIndexAssetMap*           IndexAssetMap;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableShipwreck                     ShipwreckSpawnedOn;                                       // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         SpawnedMerchantCaptain;                                   // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc"));
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


// Class LostShipmentsClueVariants.WaitForClueCollectedStep
// 0x0010 (0x0078 - 0x0068)
class UWaitForClueCollectedStep : public UTaleQuestStep
{
public:
	class UClueDescriptor*                             ClueDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WaitForClueCollectedStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc
// 0x0010 (0x0040 - 0x0030)
class UWaitForClueCollectedStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueDescriptor                Clue;                                                     // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator
// 0x0030 (0x0060 - 0x0030)
class UWashedUpMessageInABottleClueCreator : public ULandClueCreator
{
public:
	TAssetPtr<class UClass>                            MessageInABottleItem;                                     // 0x0030(0x0020) (Edit, DisableEditOnInstance)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;              // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;              // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnZOffset;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

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
// 0x0088 (0x00B0 - 0x0028)
class UWashedUpMessageInABottleClueSiteData : public UClueSiteData
{
public:
	class UClass*                                      BottleItemType;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandNameToSpawnOn;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       IslandSpawnLocationReservationId;                         // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0050(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

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
