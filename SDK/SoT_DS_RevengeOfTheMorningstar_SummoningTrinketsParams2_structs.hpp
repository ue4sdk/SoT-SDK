#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_RevengeOfTheMorningstar_SummoningTrinketsParams2.DS_RevengeOfTheMorningstar_SummoningTrinketsParams2
// 0x0040
struct FDS_RevengeOfTheMorningstar_SummoningTrinketsParams2
{
	TAssetPtr<class AActor>                            LocationID_24_7E083638441916E158E16DBFDF145C42;           // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      Item_26_3B017EBB409258D08EE1929C2A096397;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Location_25_CCC13A4D4472150801A4B9815B484455;             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Trinket1_35_79C95A75444BB8C4E93BA89B6C311421;             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Trinket2_32_57C2EDFD4D52F90C0F662789CB687D40;             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
