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

// UserDefinedStruct DS_WildRoseItemTracker.DS_WildRoseItemTracker
// 0x0009
struct FDS_WildRoseItemTracker
{
	class AActor*                                      TrackedItem_6_E20A60324E2E402C7297AC9AD4648C10;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMusicBox_4_2BBFB00A48BE0C41EB48B398E04767ED;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
