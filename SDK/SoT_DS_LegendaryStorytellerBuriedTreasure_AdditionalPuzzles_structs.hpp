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

// UserDefinedStruct DS_LegendaryStorytellerBuriedTreasure_AdditionalPuzzles.DS_LegendaryStorytellerBuriedTreasure_AdditionalPuzzles
// 0x0049
struct FDS_LegendaryStorytellerBuriedTreasure_AdditionalPuzzles
{
	TArray<TAssetPtr<class AActor>>                    DigLocationIDs_32_6AF0BBFE407F108EAA46009D9EE2D047;       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      DigLocation_14_54B3A2CC4FAEAA5A5E2288AD4C551A5A;          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        Pages_5_EF5F2D8842F13425772DFA82CC443A37;                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      item_10_845853EC4F5E7818A6DBCDAA13B869D6;                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NotBuried_12_1CA5989448FA6F3D10E5EB971BBFAC7B;            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UClass*                                      BriggsyChest_18_181EB6774E95E9D1EF31D9A1BB75DAFB;         // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AncientChest_21_0093E6D148DD3AF08D0699A8BF58AA45;         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AncientCrown_25_8CA688EF46FA83A856FC4592E5D28697;         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LargeIsland_27_5B991CB04E88CF7B93A6409F57F7FC6A;          // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
