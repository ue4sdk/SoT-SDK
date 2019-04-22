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
// 0x0049
struct FDS_LegendaryStorytellerWoodPlankPuzzle
{
	TAssetPtr<class AActor>                            SolutionLocation_14_54B3A2CC4FAEAA5A5E2288AD4C551A5A;     // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Plank_13_845853EC4F5E7818A6DBCDAA13B869D6;                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            MusicLocation_17_AB6ECCE24E9DCED141521A831F848014;        // 0x0028(0x0020) (Edit, BlueprintVisible)
	bool                                               LargeIsland_19_44B7722D42441609D64760847C3A5A69;          // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
