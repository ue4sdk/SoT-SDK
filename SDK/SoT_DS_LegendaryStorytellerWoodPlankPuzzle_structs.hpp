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

// UserDefinedStruct DS_LegendaryStorytellerWoodPlankPuzzle.DS_LegendaryStorytellerWoodPlankPuzzle
// 0x0028
struct FDS_LegendaryStorytellerWoodPlankPuzzle
{
	TAssetPtr<class AActor>                            SolutionLocation_14_54B3A2CC4FAEAA5A5E2288AD4C551A5A;     // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Plank_13_845853EC4F5E7818A6DBCDAA13B869D6;                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
