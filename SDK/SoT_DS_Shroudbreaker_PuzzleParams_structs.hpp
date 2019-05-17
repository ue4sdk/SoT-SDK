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

// UserDefinedStruct DS_Shroudbreaker_PuzzleParams.DS_Shroudbreaker_PuzzleParams
// 0x0028
struct FDS_Shroudbreaker_PuzzleParams
{
	TAssetPtr<class AActor>                            Location_2_36E413AE45714086DF7374A613793B7B;              // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        ShipsLogBundle_5_6C902A064BC3BD0610E59AB88532633E;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
