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

// UserDefinedStruct DS_RevengeOfTheMorningstar_GemHandIn.DS_RevengeOfTheMorningstar_GemHandIn
// 0x0010
struct FDS_RevengeOfTheMorningstar_GemHandIn
{
	class AActor*                                      HandInLocation_2_3E2D3B134D7C2EC5EB2F84BD530D1ED0;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      GemLock_5_DACDCB3F47727B7C35105E82AE4BF3E0;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
