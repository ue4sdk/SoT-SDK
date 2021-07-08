#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_RareEngine_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareEngine.MemoryVisualiserStat
// 0x0020
struct FMemoryVisualiserStat
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DisplayName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              MemoryUsageMB;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct RareEngine.MemoryVisualiserClass
// 0x0028
struct FMemoryVisualiserClass
{
	class UClass*                                      ClassType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMemoryGatheringMode>                  MemoryGatheringMode;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      DisplayName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              MemoryUsageMB;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct RareEngine.MemoryVisualiserCategory
// 0x0058
struct FMemoryVisualiserCategory
{
	class FString                                      CategoryName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMemoryVisualiserStat>               CategoryStats;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMemoryVisualiserClass>              CategoryClasses;                                          // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               CollectOnServer;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              XboxOneBudgetMB;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XboxOneSBudgetMB;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              XboxOneXBudgetMB;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCLowSpecBudgetMB;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCMidSpecBudgetMB;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCHighSpecBudgetMB;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCUltraSpecBudgetMB;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MemoryUsageMB;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
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
	float                                              mUsedPhysicalMB;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mUsedPhysicalPercentage;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mAvailablePhysicalMB;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mAvailablePhysicalPercentage;                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mOOMBackupPoolSize;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mExecutableSize;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mConfigCacheMemoryUsage;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mFNameTableMemoryUsage;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mAssetRegistrySize;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mGCWorkingMemoryPoolSizeMB;                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mGCAllocated;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mObjectsArraySizeMB;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mMaxObjectsAllowed;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumPermanentObjects;                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumTransientObjects;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mUnsetSlotCound;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mClusterMemoryUsedBytes;                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumClusters;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mNumClusteredObjects;                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                mMaxClusterSize;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
