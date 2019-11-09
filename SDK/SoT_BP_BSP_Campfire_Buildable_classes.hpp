#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BSP_Campfire_Buildable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BSP_Campfire_Buildable.BP_BSP_Campfire_Buildable_C
// 0x0000 (0x0860 - 0x0860)
class ABP_BSP_Campfire_Buildable_C : public ABP_Base_Campfire_Buildable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BSP_Campfire_Buildable.BP_BSP_Campfire_Buildable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
