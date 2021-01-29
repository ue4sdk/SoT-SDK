#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
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
	class UClass*                                      SiteType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClueSiteData*                               SiteData;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDestinationDescriptor
// 0x0018
struct FWeightedClueDestinationDescriptor
{
	class UClass*                                      DestinationType;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      DifficultyWeightings;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct LostShipmentsClueFramework.WeightedClueDescriptor
// 0x0018
struct FWeightedClueDescriptor
{
	class UClass*                                      Descriptor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      DifficultyWeightings;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteTypeSupportedDescribedByEntry
// 0x0018
struct FClueSiteTypeSupportedDescribedByEntry
{
	class UClass*                                      SiteType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeightedClueDescriptor>             SupportedDescriptors;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueFramework.RestrictedClueType
// 0x0010
struct FRestrictedClueType
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Max;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.LootToRangeDist
// 0x0028
struct FLootToRangeDist
{
	struct FWeightedProbabilityRange                   NumberOfLootItemsToSpawn;                                 // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UWeightedTreasureChestDescAsset*             WeightedLootDescAsset;                                    // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
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

// ScriptStruct LostShipmentsClueFramework.LandClueCreationChoice
// 0x0018
struct FLandClueCreationChoice
{
	class UClass*                                      ClueSiteType;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandIdentifier;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULandClueCreator*                            ClueCreator;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LostShipmentsClueFramework.SeaClueCreationChoice
// 0x0020
struct FSeaClueCreationChoice
{
	class UClass*                                      SiteType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USeaClueCreator*                             ClueCreator;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
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
	class UClueDescriptor*                             ObtainedClue;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ObtainedSiteType;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
