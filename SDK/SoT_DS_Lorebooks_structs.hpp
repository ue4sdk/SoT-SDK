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

// UserDefinedStruct DS_Lorebooks.DS_Lorebooks
// 0x0028
struct FDS_Lorebooks
{
	TAssetPtr<class AActor>                            Location_2_54B3A2CC4FAEAA5A5E2288AD4C551A5A;              // 0x0000(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Lorebook_8_EF5F2D8842F13425772DFA82CC443A37;              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
