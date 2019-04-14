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
// 0x0050
struct FDS_RevengeOfTheMorningstar_Graymarrow_SpawnParams
{
	TAssetPtr<class AActor>                            GraymarrowSpawnerLocation_32_4D86F5DC467042BDE8E901BCB7FF64AB;// 0x0000(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            GraymarrowLockLocation_24_C6FA3E95495A00EDB117DEB8D3FE4CFE;// 0x0020(0x0020) (Edit, BlueprintVisible)
	class AActor*                                      GMLockLocation_28_65B95ECC44491D257E19FBBEF6CD3530;       // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SummonLock_30_34B7AFF54BD53323C049D08CD5632287;           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
