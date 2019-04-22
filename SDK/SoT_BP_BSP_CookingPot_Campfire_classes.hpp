#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BSP_CookingPot_Campfire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BSP_CookingPot_Campfire.BP_BSP_CookingPot_Campfire_C
// 0x0000 (0x04E8 - 0x04E8)
class ABP_BSP_CookingPot_Campfire_C : public ABP_CookingPot_Campfire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BSP_CookingPot_Campfire.BP_BSP_CookingPot_Campfire_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
