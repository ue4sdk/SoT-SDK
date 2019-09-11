#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_LegendaryStorytellerWoodPlankPuzzle_classes.hpp"
#include "SoT_DS_LegendaryStorytellerPuzzle_AdditionalPuzzles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_LegendaryStorytellerAreaPuzzlePools.DS_LegendaryStorytellerAreaPuzzlePools
// 0x0030
struct FDS_LegendaryStorytellerAreaPuzzlePools
{
	TArray<struct FDS_LegendaryStorytellerPuzzle_AdditionalPuzzles> EasyPuzzles_12_C79E9EB3479549EF8B2BBCB65F606C2F;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_LegendaryStorytellerPuzzle_AdditionalPuzzles> HardPuzzles_13_B2765D244BA9D8C141177696349F7CD7;          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_LegendaryStorytellerWoodPlankPuzzle> PlankPuzzles_11_EB38F7F945E09A546DFEC8B4FB0D4B01;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
