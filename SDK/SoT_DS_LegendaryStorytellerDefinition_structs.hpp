#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_LegendaryStorytellerPuzzle_classes.hpp"
#include "SoT_DS_LegendaryStorytellerWoodPlankPuzzle_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_LegendaryStorytellerDefinition.DS_LegendaryStorytellerDefinition
// 0x0098
struct FDS_LegendaryStorytellerDefinition
{
	TArray<class UClass*>                              BriggsyItems_41_F7C6645541D77186C51CD49ACFDE8490;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_LegendaryStorytellerPuzzle>      EasyPuzzles_42_A4C7712C4C930453F41A8787EF8B588A;          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_LegendaryStorytellerPuzzle>      HardPuzzles_43_65E9FAAF47C8F23536EBA4BDD829EBB8;          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            HandInPoint_46_E4C35D65459F4B1E4AC256910A03501A;          // 0x0030(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            NPCLocation_49_79BC34ED45CDE38A95E0C59AA81BF3DD;          // 0x0050(0x0020) (Edit, BlueprintVisible)
	TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle> WoodenPlankPuzzles_53_5E43259C495EBBCCEA1E05B8E10DF46F;   // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      AncientCrown_56_0467C2C2444EDE369E45D9947026685C;         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDS_Lorebooks>                       Lorebooks_60_678F41F84B4169952DE5619F4C26A797;            // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
