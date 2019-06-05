#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_hulllivery_battletoads_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hulllivery_battletoads_01_CustomizationDesc.hulllivery_battletoads_01_CustomizationDesc_C
// 0x0000 (0x00E8 - 0x00E8)
class Uhulllivery_battletoads_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass hulllivery_battletoads_01_CustomizationDesc.hulllivery_battletoads_01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
