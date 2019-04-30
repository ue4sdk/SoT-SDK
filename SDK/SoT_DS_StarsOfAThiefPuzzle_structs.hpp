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

// UserDefinedStruct DS_StarsOfAThiefPuzzle.DS_StarsOfAThiefPuzzle
// 0x0029
struct FDS_StarsOfAThiefPuzzle
{
	TAssetPtr<class AActor>                            Location_2_54B3A2CC4FAEAA5A5E2288AD4C551A5A;              // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UQuestBookPageBundle*                        Pages_5_EF5F2D8842F13425772DFA82CC443A37;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotBuried_13_35AD99A54E52CDA259D444861A296407;            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
