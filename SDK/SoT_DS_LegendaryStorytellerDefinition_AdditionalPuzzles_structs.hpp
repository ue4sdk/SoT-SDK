#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_LegendaryStorytellerAreaPuzzlePools_classes.hpp"
#include "SoT_DS_Lorebooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_LegendaryStorytellerDefinition_AdditionalPuzzles.DS_LegendaryStorytellerDefinition_AdditionalPuzzles
// 0x0078
struct FDS_LegendaryStorytellerDefinition_AdditionalPuzzles
{
	TArray<class UClass*>                              BriggsyItems_41_F7C6645541D77186C51CD49ACFDE8490;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_LegendaryStorytellerAreaPuzzlePools> PuzzleAreaPool_63_A4C7712C4C930453F41A8787EF8B588A;       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class AActor>                            HandInPoint_46_E4C35D65459F4B1E4AC256910A03501A;          // 0x0020(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            NPCLocation_49_79BC34ED45CDE38A95E0C59AA81BF3DD;          // 0x0040(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      AncientCrown_56_0467C2C2444EDE369E45D9947026685C;         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDS_Lorebooks>                       Lorebooks_60_678F41F84B4169952DE5619F4C26A797;            // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
