#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cannon_Reaper_01_e_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cannon_Reaper_01_e_CustomizationDesc.Cannon_Reaper_01_e_CustomizationDesc_C
// 0x0000 (0x0108 - 0x0108)
class UCannon_Reaper_01_e_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Cannon_Reaper_01_e_CustomizationDesc.Cannon_Reaper_01_e_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
