#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ScoreScroll_ItemDesc_Rome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ScoreScroll_ItemDesc_Rome.BP_ScoreScroll_ItemDesc_Rome_C
// 0x0000 (0x0130 - 0x0130)
class UBP_ScoreScroll_ItemDesc_Rome_C : public UTreasureMapItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ScoreScroll_ItemDesc_Rome.BP_ScoreScroll_ItemDesc_Rome_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
