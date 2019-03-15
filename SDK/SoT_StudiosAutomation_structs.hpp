#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_StudiosAutomation_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StudiosAutomation.TestLevelMetadataEntry
// 0x0020
struct FTestLevelMetadataEntry
{
	class FString                                      Property;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StudiosAutomation.ClientPawnDetails
// 0x0010
struct FClientPawnDetails
{
	TArray<class APawn*>                               Pawns;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct StudiosAutomation.AssetAuditConstantEntry
// 0x0018
struct FAssetAuditConstantEntry
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct StudiosAutomation.AssetAuditConstants
// 0x0010
struct FAssetAuditConstants
{
	TArray<struct FAssetAuditConstantEntry>            AssetAuditConstants;                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct StudiosAutomation.CollectionTotalsLimits
// 0x0010
struct FCollectionTotalsLimits
{
	int                                                MaxTotalVerts;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTotalMemory;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MostExpensiveAssetsSetSize;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpensiveAssetSetMaxTotalMemory;                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionLimits
// 0x0018
struct FCollectionLimits
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCollectionTotalsLimits                     CollectionTotals;                                         // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionLimitsArray
// 0x0010
struct FCollectionLimitsArray
{
	TArray<struct FCollectionLimits>                   CollectionLimits;                                         // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
