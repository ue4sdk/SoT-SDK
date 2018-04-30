#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareEngine.MemoryVisualiserStat
// 0x0020
struct FMemoryVisualiserStat
{
	float                                              MemoryUsageMB;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       StatName;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareEngine.MemoryVisualiserClass
// 0x0028
struct FMemoryVisualiserClass
{
	float                                              MemoryUsageMB;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      ClassType;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMemoryGatheringMode>                  MemoryGatheringMode;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DisplayName;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareEngine.MemoryVisualiserCategory
// 0x0058
struct FMemoryVisualiserCategory
{
	float                                              MemoryUsageMB;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class FString                                      CategoryName;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMemoryVisualiserStat>               CategoryStats;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMemoryVisualiserClass>              CategoryClasses;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               CollectOnServer;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XboxOneBudgetMB;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XboxOneSBudgetMB;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XboxOneXBudgetMB;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCLowSpecBudgetMB;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCMidSpecBudgetMB;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCHighSpecBudgetMB;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCUltraSpecBudgetMB;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareEngine.StaticMeshComponentList
// 0x0010
struct FStaticMeshComponentList
{
	TArray<class UStaticMeshComponent*>                Components;                                               // 0x0000(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct RareEngine.StaticMeshActorList
// 0x0010
struct FStaticMeshActorList
{
	TArray<class AStaticMeshActor*>                    Actors;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct RareEngine.MemoryCommonData
// 0x0050
struct FMemoryCommonData
{
	int                                                mMaxClusterSize;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              mUsedPhysicalMB;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mUsedPhysicalPercentage;                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mAvailablePhysicalMB;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mAvailablePhysicalPercentage;                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mOOMBackupPoolSize;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mExecutableSize;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mConfigCacheMemoryUsage;                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mFNameTableMemoryUsage;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mAssetRegistrySize;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mGCWorkingMemoryPoolSizeMB;                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mGCAllocated;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mObjectsArraySizeMB;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mMaxObjectsAllowed;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumPermanentObjects;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumTransientObjects;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mUnsetSlotCound;                                          // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mClusterMemoryUsedBytes;                                  // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumClusters;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumClusteredObjects;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
