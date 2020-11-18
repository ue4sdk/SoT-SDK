#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LostShipmentsClueFramework.ClueSiteData
// 0x0000 (0x0028 - 0x0028)
class UClueSiteData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteData"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UClueSiteType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.LandClueCreator
// 0x0008 (0x0030 - 0x0028)
class ULandClueCreator : public UObject
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.LandClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.SeaClueCreator
// 0x0008 (0x0030 - 0x0028)
class USeaClueCreator : public UObject
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.SeaClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class UClueChoiceSelectionStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class UFixedClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
{
public:
	int                                                IndexToSelect;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDescriptor
// 0x0000 (0x0028 - 0x0028)
class UClueDescriptor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UClueConnectionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary"));
		return ptr;
	}


	static class UClueDescriptor* CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, TArray<class UClass*> AllowedClueTypes, const struct FClueSite& TargetSite);
};


// Class LostShipmentsClueFramework.ClueDescriptorGenerator
// 0x0008 (0x0030 - 0x0028)
class UClueDescriptorGenerator : public UObject
{
public:
	class UClass*                                      DescriptorType;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptorGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDestinationGenerator
// 0x0000 (0x0028 - 0x0028)
class UClueDestinationGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDestinationDescriptor
// 0x0000 (0x0028 - 0x0028)
class UClueDestinationDescriptor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueConnectionConfig
// 0x0030 (0x0058 - 0x0028)
class UClueConnectionConfig : public UDataAsset
{
public:
	TArray<struct FClueSiteTypeSupportedDescribedByEntry> CluesThatCanDescribeSites;                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClueDescriptorGenerator*>            ClueGenerators;                                           // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClueDestinationGenerator*>           DestinationGenerators;                                    // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueConnectionConfig"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDescriptorContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UClueDescriptorContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptorContainerInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDescriptorContainerComponent
// 0x0010 (0x00D8 - 0x00C8)
class UClueDescriptorContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UClueDescriptor*                             CurrentClue;                                              // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptorContainerComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueFactoryConfig
// 0x0028 (0x0050 - 0x0028)
class UClueFactoryConfig : public UDataAsset
{
public:
	TArray<class ULandClueCreator*>                    LandClueCreators;                                         // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class USeaClueCreator*>                     SeaClueCreators;                                          // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClueChoiceSelectionStrategy*                ChoiceStrategy;                                           // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueFactoryConfig"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueFactory
// 0x0008 (0x0030 - 0x0028)
class UClueFactory : public UObject
{
public:
	class UClueFactoryConfig*                          Config;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueFactory"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UClueLifetimeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary"));
		return ptr;
	}


	static void GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue);
};


// Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset
// 0x0010 (0x0038 - 0x0028)
class USeaClueSiteTypesDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              ClueSiteTypes;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep
// 0x0078 (0x00E0 - 0x0068)
class UTaleQuestChooseLandOrSeaStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
	class USeaClueSiteTypesDataAsset*                  SeaClueSiteTypes;                                         // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0088(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc
// 0x0060 (0x0090 - 0x0030)
class UTaleQuestChooseLandOrSeaStepDesc : public UTaleQuestStepDesc
{
public:
	class USeaClueSiteTypesDataAsset*                  SeaClueSiteTypes;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FirstClueApproxProportion;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngleInDegrees;                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionProportion;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandClueChanceWhenPreviousClueWasSea;                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandClueChanceWhenPreviousClueWasLand;                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FQuestVariableClueSiteArray                 ClueSites;                                                // 0x0050(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRouteData;                                           // 0x0060(0x0010) (Edit)
	struct FQuestVariableBool                          IsSeaLocation;                                            // 0x0070(0x0010) (Edit)
	struct FQuestVariableNameArray                     ValidIslandNames;                                         // 0x0080(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestGenerateCluePointingToSiteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	TArray<class UClass*>                              AllowedClueTypes;                                         // 0x0088(0x0010) (ZeroConstructor)
	class UClueConnectionConfig*                       ConnectionConfiguration;                                  // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc
// 0x0038 (0x0068 - 0x0030)
class UTaleQuestGenerateCluePointingToSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      TargetClueSite;                                           // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueDescriptor                GeneratedClue;                                            // 0x0040(0x0010) (Edit)
	TArray<class UClass*>                              AllowedClueTypes;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
	class UClueConnectionConfig*                       ConnectionConfiguration;                                  // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateClueSiteAtSeaLocationStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClueFactoryConfig*                          ClueConfig;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateClueSiteAtSeaLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        ApproximateLocation;                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueFactoryConfiguration;                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateClueSiteOnIslandStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClueFactoryConfig*                          ClueConfig;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateClueSiteOnIslandStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueGenerationConfiguration;                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestIsClueOfTypeStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClass*                                      ClueSiteTypeToMatchAgainst;                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestIsClueOfTypeStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ClueSiteTypeToMatch;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0038(0x0010) (Edit)
	struct FQuestVariableBool                          IsMatchingType;                                           // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestSpawnLootItemInClueSiteStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc
// 0x0030 (0x0060 - 0x0030)
class UTaleQuestSpawnLootItemInClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClass                         LootItem;                                                 // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	struct FQuestVariableItemInfo                      SpawnedLootItem;                                          // 0x0050(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
