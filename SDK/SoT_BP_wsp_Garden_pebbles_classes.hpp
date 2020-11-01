#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wsp_Garden_pebbles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wsp_Garden_pebbles.BP_wsp_Garden_pebbles_C
// 0x0000 (0x0505 - 0x0505)
class ABP_wsp_Garden_pebbles_C : public ABP_Placement_Garden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_wsp_Garden_pebbles.BP_wsp_Garden_pebbles_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
