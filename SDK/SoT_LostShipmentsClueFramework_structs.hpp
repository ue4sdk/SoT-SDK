#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_LostShipmentsClueFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_TradeRouteFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LostShipmentsClueFramework.ClueSite
// 0x0020
struct FClueSite
{
	UClass*                                            SiteType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	UClueSiteData*                                     SiteData;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	FVector                                            Location;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDestinationDescriptor
// 0x0018
struct FWeightedClueDestinationDescriptor
{
	UClass*                                            DestinationType;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      DifficultyWeightings;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDescriptor
// 0x0018
struct FWeightedClueDescriptor
{
	UClass*                                            Descriptor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      DifficultyWeightings;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteTypeSupportedDescribedByEntry
// 0x0018
struct FClueSiteTypeSupportedDescribedByEntry
{
	UClass*                                            SiteType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<FWeightedClueDescriptor>                    SupportedDescriptors;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueFramework.RestrictedClueType
// 0x0010
struct FRestrictedClueType
{
	UClass*                                            Type;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Max;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteLootRestriction
// 0x0010
struct FClueSiteLootRestriction
{
	UClass*                                            SiteType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LootMax;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.DebrisToRangeDist
// 0x0028
struct FDebrisToRangeDist
{
	FWeightedProbabilityRange                          NumberOfDebrisItemsToSpawn;                               // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	UWeightedDebrisDataAsset*                          WeightedDebrisTypeAsset;                                  // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LostShipmentsClueFramework.LootToRangeDist
// 0x0028
struct FLootToRangeDist
{
	FWeightedProbabilityRange                          NumberOfLootItemsToSpawn;                                 // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	UWeightedTreasureChestDescAsset*                   WeightedLootDescAsset;                                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LostShipmentsClueFramework.LootSpawnedAtClueSite
// 0x0018
struct FLootSpawnedAtClueSite
{
	UClass*                                            SiteType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            SiteLocation;                                             // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumLoot;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteLootHistory
// 0x0010
struct FClueSiteLootHistory
{
	TArray<FLootSpawnedAtClueSite>                     History;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSite
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueSite : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueDescriptor
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueDescriptor : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.WeightedDebris
// 0x0028
struct FWeightedDebris
{
	TAssetPtr<class UClass>                            DebrisClass;                                              // 0x0000(0x0020) (Edit)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.LandClueCreationChoice
// 0x0018
struct FLandClueCreationChoice
{
	UClass*                                            ClueSiteType;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              IslandIdentifier;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	ULandClueCreator*                                  ClueCreator;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LostShipmentsClueFramework.SeaClueCreationChoice
// 0x0020
struct FSeaClueCreationChoice
{
	UClass*                                            SiteType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	USeaClueCreator*                                   ClueCreator;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSiteArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueSiteArray : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.EventClueObtained
// 0x0020
struct FEventClueObtained
{
	UClueDescriptor*                                   ObtainedClue;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UClass*                                            ObtainedSiteType;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
