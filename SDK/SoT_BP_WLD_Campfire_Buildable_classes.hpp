#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WLD_Campfire_Buildable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WLD_Campfire_Buildable.BP_WLD_Campfire_Buildable_C
// 0x0000 (0x0780 - 0x0780)
class ABP_WLD_Campfire_Buildable_C : public ABP_Base_Campfire_Buildable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WLD_Campfire_Buildable.BP_WLD_Campfire_Buildable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
