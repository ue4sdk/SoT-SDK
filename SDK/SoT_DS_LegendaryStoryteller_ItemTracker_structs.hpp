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

// UserDefinedStruct DS_LegendaryStoryteller_ItemTracker.DS_LegendaryStoryteller_ItemTracker
// 0x0009
struct FDS_LegendaryStoryteller_ItemTracker
{
	class AActor*                                      TrackedItem_6_3D58A5A04D0FC294AD3B9AB2614C4828;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCrownKey_4_A91BABDE4217879D7B44F08B09A9EBAB;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
