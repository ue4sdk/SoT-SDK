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

// UserDefinedStruct DS_LegendaryStorytellerPuzzle.DS_LegendaryStorytellerPuzzle
// 0x0031
struct FDS_LegendaryStorytellerPuzzle
{
	TAssetPtr<class AActor>                            Location_2_54B3A2CC4FAEAA5A5E2288AD4C551A5A;              // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UQuestBookPageBundle*                        Pages_5_EF5F2D8842F13425772DFA82CC443A37;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      item_10_845853EC4F5E7818A6DBCDAA13B869D6;                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NotBuried_12_1CA5989448FA6F3D10E5EB971BBFAC7B;            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
