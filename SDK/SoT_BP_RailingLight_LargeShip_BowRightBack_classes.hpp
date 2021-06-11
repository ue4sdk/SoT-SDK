#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RailingLight_LargeShip_BowRightBack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightBack.BP_RailingLight_LargeShip_BowRightBack_C
// 0x0000 (0x07A9 - 0x07A9)
class ABP_RailingLight_LargeShip_BowRightBack_C : public ABP_InteractableShipRailingLight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RailingLight_LargeShip_BowRightBack.BP_RailingLight_LargeShip_BowRightBack_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
