#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AmmoChest_Dynamic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AmmoChest_Dynamic.BP_AmmoChest_Dynamic_C
// 0x0000 (0x0578 - 0x0578)
class ABP_AmmoChest_Dynamic_C : public ABP_AmmoChest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AmmoChest_Dynamic.BP_AmmoChest_Dynamic_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
