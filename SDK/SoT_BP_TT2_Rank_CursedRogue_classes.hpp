#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT2_Rank_CursedRogue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT2_Rank_CursedRogue.BP_TT2_Rank_CursedRogue_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_TT2_Rank_CursedRogue_C : public UTaleRankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT2_Rank_CursedRogue.BP_TT2_Rank_CursedRogue_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
