#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FirePropagation_MediumShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FirePropagation_MediumShip.BP_FirePropagation_MediumShip_C
// 0x0000 (0x0280 - 0x0280)
class UBP_FirePropagation_MediumShip_C : public UShipFirePropagationComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FirePropagation_MediumShip.BP_FirePropagation_MediumShip_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
