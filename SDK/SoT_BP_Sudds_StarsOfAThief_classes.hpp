#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sudds_StarsOfAThief_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Sudds_StarsOfAThief.BP_Sudds_StarsOfAThief_C
// 0x0000 (0x18B5 - 0x18B5)
class UBP_Sudds_StarsOfAThief_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Sudds_StarsOfAThief.BP_Sudds_StarsOfAThief_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
