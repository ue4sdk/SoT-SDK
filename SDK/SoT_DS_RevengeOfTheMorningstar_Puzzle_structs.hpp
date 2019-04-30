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

// UserDefinedStruct DS_RevengeOfTheMorningstar_Puzzle.DS_RevengeOfTheMorningstar_Puzzle
// 0x0028
struct FDS_RevengeOfTheMorningstar_Puzzle
{
	TAssetPtr<class AActor>                            Location_2_E980D9DA473DB5EE170C259B612E0F7D;              // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      Item_6_18A31BDC47DFE55A22DE6D86831816EE;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
