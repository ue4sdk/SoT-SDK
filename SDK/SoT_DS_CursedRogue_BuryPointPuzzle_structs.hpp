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

// UserDefinedStruct DS_CursedRogue_BuryPointPuzzle.DS_CursedRogue_BuryPointPuzzle
// 0x0028
struct FDS_CursedRogue_BuryPointPuzzle
{
	class UQuestBookPageBundle*                        Bundle_2_7FE4637E45A008EE399F71ABE9DF5060;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            BuryLocationID_5_C136BDC9412F5D706487A48ECEAFB2FB;        // 0x0008(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
