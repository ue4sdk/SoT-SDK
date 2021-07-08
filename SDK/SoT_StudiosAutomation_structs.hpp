#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_StudiosAutomation_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

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

// ScriptStruct StudiosAutomation.SubstringAuditQueryData
// 0x0018
struct FSubstringAuditQueryData
{
	TArray<class FString>                              QueryStringArray;                                         // 0x0000(0x0010) (ZeroConstructor)
	int                                                SearchSetSize;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MemoryLimitForSet;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.FolderTotals
// 0x0028
struct FFolderTotals
{
	bool                                               EnforceCollectionMembership;                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               CollectionsAllowedForFolder;                              // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               AssetTypesToTest;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct StudiosAutomation.MeshAuditLimits
// 0x0038
struct FMeshAuditLimits
{
	TArray<struct FSubstringAuditQueryData>            SubstringQueries;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FFolderTotals                               FolderMeshLimits;                                         // 0x0010(0x0028)
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
	int                                                MaxTotalVerts;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTotalMemory;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MostExpensiveAssetsSetSize;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExpensiveAssetSetMaxTotalMemory;                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionMeshLimitsBase
// 0x0008
struct FCollectionMeshLimitsBase
{
	int                                                MaxVerts;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxMemory;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionStaticMeshLimits
// 0x0000 (0x0008 - 0x0008)
struct FCollectionStaticMeshLimits : public FCollectionMeshLimitsBase
{

};

// ScriptStruct StudiosAutomation.CollectionSkeleMeshLimits
// 0x0000 (0x0008 - 0x0008)
struct FCollectionSkeleMeshLimits : public FCollectionMeshLimitsBase
{

};

// ScriptStruct StudiosAutomation.CollectionAnimSequenceLimits
// 0x0004
struct FCollectionAnimSequenceLimits
{
	int                                                MaxMemory;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionLimits
// 0x0034
struct FCollectionLimits
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ECollectionAuditType>                  AuditType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnlyParentCollection;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FCollectionTotalsLimits                     CollectionTotals;                                         // 0x000C(0x0010) (Edit)
	struct FCollectionStaticMeshLimits                 StaticMeshLimits;                                         // 0x001C(0x0008) (Edit)
	struct FCollectionSkeleMeshLimits                  SkeleMeshLimits;                                          // 0x0024(0x0008) (Edit)
	struct FCollectionAnimSequenceLimits               AnimLimits;                                               // 0x002C(0x0004) (Edit)
	bool                                               CanUseComplexCollisionAsSimple;                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseLOD0Collision;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
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
