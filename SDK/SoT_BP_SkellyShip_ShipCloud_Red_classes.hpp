#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkellyShip_ShipCloud_Red_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkellyShip_ShipCloud_Red.BP_SkellyShip_ShipCloud_Red_C
// 0x0000 (0x04B8 - 0x04B8)
class ABP_SkellyShip_ShipCloud_Red_C : public ABP_SkellyFort_SkullCloud_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkellyShip_ShipCloud_Red.BP_SkellyShip_ShipCloud_Red_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
