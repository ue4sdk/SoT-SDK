#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmp_fishing_rod_klw_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmp_fishing_rod_klw_01_a_Wieldable.BP_cmp_fishing_rod_klw_01_a_Wieldable_C
// 0x0000 (0x0B68 - 0x0B68)
class ABP_cmp_fishing_rod_klw_01_a_Wieldable_C : public ABP_FishingRod_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmp_fishing_rod_klw_01_a_Wieldable.BP_cmp_fishing_rod_klw_01_a_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
