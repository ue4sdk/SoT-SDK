#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_EmissaryFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostServiceEvent
// 0x0018
struct FEmissaryGlobalActionRewardBoostServiceEvent
{
	class UClass*                                      FinishedEventType;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedCrew;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryCompanyActionRewardBoostServiceEvent
// 0x001C
struct FEmissaryCompanyActionRewardBoostServiceEvent
{
	struct FName                                       AssociatedCompany;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       AssociatedCrew;                                           // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostEvent
// 0x0008
struct FEmissaryGlobalActionRewardBoostEvent
{
	class UClass*                                      GameEventType;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryNonQuestCompanyActionRewardBoostEvent
// 0x0001
struct FEmissaryNonQuestCompanyActionRewardBoostEvent
{
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryQuestCompanyActionRewardBoostEvent
// 0x0014
struct FEmissaryQuestCompanyActionRewardBoostEvent
{
	TEnumAsByte<EEmisaryCompanyActionType>             CompanyActionType;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGuid                                       QuestId;                                                  // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EmissaryFramework.EmissaryCompanyChangedEvent
// 0x0010
struct FEmissaryCompanyChangedEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EmissaryFramework.EmissaryLedgerVisited
// 0x0010
struct FEmissaryLedgerVisited
{
	class FString                                      CompanyId;                                                // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
