#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmp_lantern_oos_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmp_lantern_oos_01_a_Wieldable.BP_cmp_lantern_oos_01_a_Wieldable_C
// 0x0000 (0x0A08 - 0x0A08)
class ABP_cmp_lantern_oos_01_a_Wieldable_C : public ABP_Lantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmp_lantern_oos_01_a_Wieldable.BP_cmp_lantern_oos_01_a_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
