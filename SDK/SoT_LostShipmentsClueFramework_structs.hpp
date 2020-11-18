#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"
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
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.ClueSiteTypeSupportedDescribedByEntry
// 0x0018
struct FClueSiteTypeSupportedDescribedByEntry
{
	class UClass*                                      SiteType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              SupportedDescriptors;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSiteArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueSiteArray : public FQuestVariable
{

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

// ScriptStruct LostShipmentsClueFramework.EventClueObtained
// 0x0018
struct FEventClueObtained
{
	class UClueDescriptor*                             ObtainedClue;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
