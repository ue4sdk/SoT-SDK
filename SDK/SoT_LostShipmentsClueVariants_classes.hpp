#pragma once

// Sea of Thieves (2) SDK

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
	UClueDestinationDescriptor*                        DestinationDescriptor;                                    // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData)

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


// Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource
// 0x00B8 (0x00E0 - 0x0028)
class UAbandonedNoteClueTextChoiceSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	TMap<UClueDestinationDescriptor*, int16_t>         ExistingDestinations;                                     // 0x0040(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSource"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface
// 0x0000 (0x0028 - 0x0028)
class UAbandonedNoteClueTextChoiceSourceConsumerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextChoiceSourceConsumerInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteClueTextAsset
// 0x0018 (0x0040 - 0x0028)
class UAbandonedNoteClueTextAsset : public UDataAsset
{
public:
	TArray<FText>                                      Descriptions;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UClass*                                            DestinationType;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	TArray<FClueDestinationToTextIndex>                TextIndexMappings;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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


// Class LostShipmentsClueVariants.ClueTitleInterface
// 0x0000 (0x0028 - 0x0028)
class UClueTitleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ClueTitleInterface"));
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
// 0x0108 (0x01D0 - 0x00C8)
class UAbandonedNoteClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	FClueDestinationChoice                             CurrentClueDestination;                                   // 0x00E8(0x0010) (Net, Transient)
	UAbandonedNoteClueTextIndexAssetMap*               ClueTextIndexAssetMap;                                    // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FString                                            CompositeFormatString;                                    // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FText                                              CurrentTitleText;                                         // 0x0110(0x0038) (Net)
	UAbandonedNoteClueTextChoiceSource*                ClueTextChoiceSource;                                     // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0150(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent"));
		return ptr;
	}


	void OnRep_CurrentTitleText();
	void OnRep_CurrentClueDestination();
};


// Class LostShipmentsClueVariants.NPCByNameClueDestinationDescriptor
// 0x0010 (0x0050 - 0x0040)
class UNPCByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	FGuid                                              NPCIdentifier;                                            // 0x0040(0x0010) (Net, ZeroConstructor, IsPlainOldData)

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
	TArray<FGenderSpecificTextPairings>                Descriptions;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UClass*                                            DestinationType;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	TArray<UAbandonedNoteClueGenderSpecificTextAsset*> ClueDestinationDescriptions;                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	TArray<UAbandonedNoteClueTextAsset*>               ClueDestinationDescriptions;                              // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteClueTextIndexAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent
// 0x00C0 (0x0188 - 0x00C8)
class UAbandonedNoteWieldableRenderingComponent : public UActorComponent
{
public:
	int                                                CanvasWidth;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UFont*                                             BodyTextFont;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UFont*                                             TitleTextFont;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontLineSpacing;                                          // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FTreasureMapWidgetText                             BodyTextLayout;                                           // 0x00E8(0x0020) (Edit, DisableEditOnInstance)
	FTreasureMapWidgetText                             TitleTextLayout;                                          // 0x0108(0x0020) (Edit, DisableEditOnInstance)
	TArray<FTextEntryWithLayout>                       ExtraTextFields;                                          // 0x0128(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TScriptInterface<class UWieldableItemCanvasRenderingInterface> WieldableRenderingInterface;                              // 0x0138(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0148(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldableRenderingComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.AbandonedNoteWieldable
// 0x0040 (0x07D0 - 0x0790)
class AAbandonedNoteWieldable : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0790(0x0010) MISSED OFFSET
	UWieldableItemCanvasRenderingComponent*            WieldableItemCanvasRenderingComponent;                    // 0x07A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UAbandonedNoteWieldableRenderingComponent*         AbandonedNoteRenderingComponent;                          // 0x07A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UInventoryItemComponent*                           InventoryItemComponent;                                   // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UUsableWieldableComponent*                         UsableWieldableComponent;                                 // 0x07B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TEnumAsByte<EQuestMapIcon>                         QuestMapIcon;                                             // 0x07C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x07C1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.AbandonedNoteWieldable"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator
// 0x0000 (0x0090 - 0x0090)
class UBarrelsOfPlentyClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.BarrelsOfPlentyClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData
// 0x0038 (0x0070 - 0x0038)
class UBarrelsOfPlentyClueSiteData : public UClueSiteData
{
public:
	FVector                                            SpawnLocation;                                            // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0044(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.BarrelsOfPlentyClueSiteData"));
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
// 0x0008 (0x0038 - 0x0030)
class UBarrelsOfPlentySeaClueCreator : public USeaClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;              // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.BarrelsOfPlentySeaClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.CircleMapClueDescriptor
// 0x0008 (0x0030 - 0x0028)
class UCircleMapClueDescriptor : public UClueDescriptor
{
public:
	UClueDestinationDescriptor*                        DestinationDescriptor;                                    // 0x0028(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.CircleMapClueDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator
// 0x0000 (0x0040 - 0x0040)
class UCircleMapClueDescriptorGenerator : public UClueDescriptorGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.CircleMapClueDescriptorGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UCircleMapClueRenderDataSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.CircleMapClueRenderDataSourceInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent
// 0x0098 (0x0160 - 0x00C8)
class UCircleMapClueDestinationContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	UClass*                                            MapMarkId;                                                // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapMarkArea;                                              // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapMarkScaleMin;                                          // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapMarkScaleMax;                                          // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapMarkNoiseModifier;                                     // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            MapMarkBlendMode;                                         // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	UClass*                                            DebugCrossId;                                             // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowCluePositionOnMap;                                    // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<FMapTextureRenderData>                      ClueRenderData;                                           // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0118(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.CircleMapClueDestinationContainerComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable
// 0x0040 (0x0880 - 0x0840)
class AClueSiteCircleMapWieldable : public ARenderToTextureMapBase
{
public:
	TAssetPtr<class UTexture2D>                        InventoryRadialBackgroundTexture;                         // 0x0840(0x0020) (Edit, DisableEditOnInstance)
	FMapRadialIconData                                 MapRadialIconData;                                        // 0x0860(0x0018) (Net)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0878(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ClueSiteCircleMapWieldable"));
		return ptr;
	}


	void OnRep_MapRadialIconData();
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


	static void GiveClueDescriptorToItem(AItemInfo* ItemInfo, UClueDescriptor* Clue);
};


// Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor
// 0x0010 (0x0050 - 0x0040)
class UCompositeClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	UClueDestinationDescriptor*                        PrimaryClueDestDescriptor;                                // 0x0040(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	UClueDestinationDescriptor*                        SecondaryClueDestDescriptor;                              // 0x0048(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.CompositeClueDestinationDescriptor"));
		return ptr;
	}


	void OnRep_DestinationInfo();
};


// Class LostShipmentsClueVariants.EndOfGooseChaseClueDestinationDescriptor
// 0x0000 (0x0040 - 0x0040)
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
	TArray<FExistingNPCToPhasedNPC>                    NPCIndexMappings;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.ExistingToPhasedNPCIndexAssetMap"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator
// 0x0000 (0x0090 - 0x0090)
class UFloatingMessageInABottleClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.FloatingMessageInABottleClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData
// 0x0038 (0x0070 - 0x0038)
class UFloatingMessageInABottleClueSiteData : public UClueSiteData
{
public:
	FVector                                            SpawnLocation;                                            // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0044(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.FloatingMessageInABottleClueSiteData"));
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
// 0x0008 (0x0038 - 0x0030)
class UFloatingMessageInABottleSeaClueCreator : public USeaClueCreator
{
public:
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;              // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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


	static UClueDescriptor* CreateEndOfGooseChaseClue();
};


// Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor
// 0x0008 (0x0048 - 0x0040)
class UIslandByCompassBearingClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	TEnumAsByte<ECompassDirections>                    CompassDirection;                                         // 0x0040(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.IslandByCompassBearingClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor
// 0x0008 (0x0048 - 0x0040)
class UIslandByNameClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	FName                                              IslandIdentifier;                                         // 0x0040(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.IslandByNameClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor
// 0x0008 (0x0048 - 0x0040)
class UIslandNameForNPCContextDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	FName                                              IslandIdentifier;                                         // 0x0040(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.IslandNameForNPCContextDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor
// 0x0018 (0x0058 - 0x0040)
class ULocationOnIslandClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	FName                                              IslandIdentifier;                                         // 0x0040(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	FVector                                            WorldPosition;                                            // 0x0048(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.LocationOnIslandClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor
// 0x0000 (0x0040 - 0x0040)
class ULostShipwreckClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.LostShipwreckClueDestinationDescriptor"));
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
// 0x0010 (0x04B0 - 0x04A0)
class UMerchantCaptainSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.MerchantCaptainSpawnComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.NPCHintDialogueClueCreator
// 0x0018 (0x0048 - 0x0030)
class UNPCHintDialogueClueCreator : public ULandClueCreator
{
public:
	UExistingToPhasedNPCIndexAssetMap*                 NPCMappingAsset;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;              // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;              // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnZOffset;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.NPCHintDialogueClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.NPCHintDialogueClueDestinationGenerator
// 0x0000 (0x0090 - 0x0090)
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
// 0x00E8 (0x0120 - 0x0038)
class UNPCHintDialogueClueSiteData : public UClueSiteData
{
public:
	FNPCData                                           NPCData;                                                  // 0x0038(0x00B8)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

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
	UClueDescriptor*                                   ClueToObtain;                                             // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UClass*                                            ClueSiteType;                                             // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

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
// 0x0010 (0x0050 - 0x0040)
class USeaLocationByGridSquareClueDestinationDescriptor : public UClueDestinationDescriptor
{
public:
	FVector                                            SeaLocationIdentifier;                                    // 0x0040(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

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


	static UClueDescriptor* CreateCluePointingToShipwreck(UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<UClass*> AllowedClueTypes, UTaleQuestSelectorService* SelectorService, const FVector& SourceLocation, AShipwreck* Shipwreck);
};


// Class LostShipmentsClueVariants.ShipwreckClueDestinationDescriptor
// 0x0000 (0x0040 - 0x0040)
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
// 0x0000 (0x0090 - 0x0090)
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
// 0x0228 (0x0288 - 0x0060)
class UTaleQuestClueInventoryService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
	TArray<UClueDescriptor*>                           ObtainedClues;                                            // 0x0078(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0088(0x0050) MISSED OFFSET
	TMap<UClueDescriptor*, AActor*>                    DiscovererMap;                                            // 0x00D8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x120];                                     // 0x0128(0x0120) MISSED OFFSET
	FText                                              TitleText;                                                // 0x0248(0x0038) (Transient)
	UAbandonedNoteClueTextChoiceSource*                ClueTextChoiceSource;                                     // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestClueInventoryService"));
		return ptr;
	}


	void SetClueTitleText(const FText& InTitleText);
	int GetCollectedClueCount();
};


// Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc
// 0x0040 (0x0068 - 0x0028)
class UTaleQuestClueInventoryServiceDesc : public UTaleQuestServiceDesc
{
public:
	TAssetPtr<class UClass>                            AbandonedNoteItem;                                        // 0x0028(0x0020) (Edit)
	TAssetPtr<class UClass>                            CircleMapItem;                                            // 0x0048(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestClueInventoryServiceDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStep
// 0x0000 (0x0090 - 0x0090)
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
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestGetNPCActorFromClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableClueSite                             ClueSite;                                                 // 0x0080(0x0010) (Edit)
	FQuestVariableActor                                NPCFromClueSite;                                          // 0x0090(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetNPCActorFromClueSiteStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep
// 0x0008 (0x0098 - 0x0090)
class UTaleQuestGetPhasedVersionOfActorFromAssetMapStep : public UTaleQuestStep
{
public:
	UExistingToPhasedNPCIndexAssetMap*                 NPCIndexAssetMap;                                         // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                ExistingNPCActor;                                         // 0x0080(0x0010) (Edit)
	FQuestVariableActorAssetType                       ObtainedPhasedNPCActorType;                               // 0x0090(0x0010) (Edit)
	FQuestVariableActor                                PhasingSourceActor;                                       // 0x00A0(0x0010) (Edit)
	UExistingToPhasedNPCIndexAssetMap*                 IndexAssetMap;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep
// 0x0000 (0x0090 - 0x0090)
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
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableShipwreck                            ShipwreckSpawnedOn;                                       // 0x0080(0x0010) (Edit)
	FQuestVariableActor                                SpawnedMerchantCaptain;                                   // 0x0090(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStep
// 0x0000 (0x0090 - 0x0090)
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
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableClueSite                             ClueSite;                                                 // 0x0080(0x0010) (Edit)
	FQuestVariableClueDescriptor                       ClueDescriptor;                                           // 0x0090(0x0010) (Edit)
	FQuestVariableActor                                MessageInABottle;                                         // 0x00A0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpMessageInABottleClueStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep
// 0x0000 (0x0090 - 0x0090)
class UTaleQuestSpawnWashedUpSkeletonClueStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc
// 0x0048 (0x00C8 - 0x0080)
class UTaleQuestSpawnWashedUpSkeletonClueStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableClueSite                             ClueSite;                                                 // 0x0080(0x0010) (Edit)
	FQuestVariableClueDescriptor                       ClueDescriptor;                                           // 0x0090(0x0010) (Edit)
	FQuestVariableActor                                SkeletonActor;                                            // 0x00A0(0x0010) (Edit)
	FQuestVariableItemInfo                             ClueItem;                                                 // 0x00B0(0x0010) (Edit)
	FName                                              SkeletonClueSocketName;                                   // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.TaleQuestSpawnWashedUpSkeletonClueStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WaitForClueCollectedStep
// 0x0048 (0x00D8 - 0x0090)
class UWaitForClueCollectedStep : public UTaleQuestStep
{
public:
	UClueDescriptor*                                   ClueDesc;                                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	AActor*                                            ClueActor;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WaitForClueCollectedStep"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UWaitForClueCollectedStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableClueDescriptor                       Clue;                                                     // 0x0080(0x0010) (Edit)
	FQuestVariableActor                                ClueActor;                                                // 0x0090(0x0010) (Edit)
	FQuestVariableActor                                Discoverer;                                               // 0x00A0(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WaitForClueCollectedStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator
// 0x0050 (0x0080 - 0x0030)
class UWashedUpMessageInABottleClueCreator : public ULandClueCreator
{
public:
	TAssetPtr<class UClass>                            MessageInABottleItem;                                     // 0x0030(0x0020) (Edit, DisableEditOnInstance)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;              // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;              // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnZOffset;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootItemSinkIntoSandZDistanceMin;                         // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootItemSinkIntoSandZDistanceMax;                         // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootItemSinkIntoSandRotationMin;                          // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootItemSinkIntoSandRotationMax;                          // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    SinkIntoSandItems;                                        // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpMessageInABottleClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpMessageInABottleClueDestinationGenerator
// 0x0000 (0x0090 - 0x0090)
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
// 0x00A8 (0x00E0 - 0x0038)
class UWashedUpMessageInABottleClueSiteData : public UClueSiteData
{
public:
	UClass*                                            BottleItemType;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              IslandNameToSpawnOn;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              IslandSpawnLocationReservationId;                         // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	FTransform                                         SpawnTransform;                                           // 0x0060(0x0030) (IsPlainOldData)
	TArray<UClass*>                                    SinkIntoSandItems;                                        // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x00A0(0x0040) MISSED OFFSET

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


// Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator
// 0x0000 (0x0090 - 0x0090)
class UWashedUpSkeletonClueDestinationGenerator : public UClueDestinationGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpSkeletonClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData
// 0x0088 (0x00C0 - 0x0038)
class UWashedUpSkeletonClueSiteData : public UClueSiteData
{
public:
	UClass*                                            SkeletonPoseType;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	UClass*                                            ClueItemType;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              IslandNameToSpawnOn;                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              IslandSpawnLocationReservationId;                         // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	FTransform                                         SpawnTransform;                                           // 0x0060(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteData"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UWashedUpSkeletonClueSiteType : public UClueSiteType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpSkeletonClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator
// 0x0040 (0x0070 - 0x0030)
class UWashedUpSkeletonLandClueCreator : public ULandClueCreator
{
public:
	TArray<TAssetPtr<class UClass>>                    SkeletonPoses;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UClass>                            ClueItemDesc;                                             // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMin;              // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnXYDistanceFromClueIncrementMax;              // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LootItemSpawnZOffset;                                     // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueVariants.WashedUpSkeletonLandClueCreator"));
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
