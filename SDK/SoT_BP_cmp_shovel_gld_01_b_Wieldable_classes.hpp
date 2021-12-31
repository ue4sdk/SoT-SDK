#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmp_shovel_gld_01_b_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmp_shovel_gld_01_b_Wieldable.BP_cmp_shovel_gld_01_b_Wieldable_C
// 0x0000 (0x0868 - 0x0868)
class ABP_cmp_shovel_gld_01_b_Wieldable_C : public ABP_Shovel_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmp_shovel_gld_01_b_Wieldable.BP_cmp_shovel_gld_01_b_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
