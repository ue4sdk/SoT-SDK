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

// UserDefinedStruct DS_CursedRogue_SelectedBundles.DS_CursedRogue_SelectedBundles
// 0x0010
struct FDS_CursedRogue_SelectedBundles
{
	class UQuestBookPageBundle*                        KeyCrewBundle_7_7B0F376E45C3C485B9DDEB8C0D2E26A1;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        BuryPointBundle_8_95477E3943EDDE8B42C9B1AEE0F26F54;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
