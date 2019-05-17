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

// UserDefinedStruct DS_FateOfTheMorningstar_GhostScenesParams2.DS_FateOfTheMorningstar_GhostScenesParams2
// 0x0028
struct FDS_FateOfTheMorningstar_GhostScenesParams2
{
	TAssetPtr<class AActor>                            GhostSceneLocation_95_4A7D4FDD456530BB19C2D7AA27C6349D;   // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      GhostScene_98_EA4711D54F57A0033255B6A93440BBE6;           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
