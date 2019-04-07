#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_RevengeOfTheMorningstar_Graymarrow_SpawnParams.DS_RevengeOfTheMorningstar_Graymarrow_SpawnParams
// 0x0088
struct FDS_RevengeOfTheMorningstar_Graymarrow_SpawnParams
{
	class UAISpawner*                                  GraymarrowSpawner_31_3151CCEA4EC199503CC8F7890ED75B5F;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            GraymarrowSpawnerLocation_32_4D86F5DC467042BDE8E901BCB7FF64AB;// 0x0008(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            TriggerLocation_6_34CC416346E04CFB7E06C3AEB4F351CB;       // 0x0028(0x0020) (Edit, BlueprintVisible)
	float                                              TriggerRadius_9_FC760E2C4A19C813387B639D63FFF6BD;         // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionName_12_30C1AB0C40E4897AC937B9AF6CEDBC8E;           // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TAssetPtr<class AActor>                            GraymarrowLockLocation_24_C6FA3E95495A00EDB117DEB8D3FE4CFE;// 0x0058(0x0020) (Edit, BlueprintVisible)
	class AActor*                                      GMLockLocation_28_65B95ECC44491D257E19FBBEF6CD3530;       // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SummonLock_30_34B7AFF54BD53323C049D08CD5632287;           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
