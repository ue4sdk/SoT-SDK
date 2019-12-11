#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipFlagCustomizationChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipFlagCustomizationChest.BP_ShipFlagCustomizationChest_C
// 0x0000 (0x05C8 - 0x05C8)
class ABP_ShipFlagCustomizationChest_C : public AShipFlagCustomizationChest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipFlagCustomizationChest.BP_ShipFlagCustomizationChest_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
