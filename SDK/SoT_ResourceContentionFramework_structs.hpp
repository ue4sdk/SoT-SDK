#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfigurationEntry
// 0x0028
struct FPoolableCollectionMapConfigurationEntry
{
	TAssetPtr<class UClass>                            Type;                                                     // 0x0000(0x0020) (Edit)
	int                                                Size;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfiguration
// 0x0018
struct FPoolableCollectionMapConfiguration
{
	TArray<struct FPoolableCollectionMapConfigurationEntry> Pools;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               PopulateJustInTime;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
