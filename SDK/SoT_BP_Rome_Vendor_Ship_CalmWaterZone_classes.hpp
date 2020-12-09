#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rome_Vendor_Ship_CalmWaterZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rome_Vendor_Ship_CalmWaterZone.BP_Rome_Vendor_Ship_CalmWaterZone_C
// 0x0000 (0x0498 - 0x0498)
class ABP_Rome_Vendor_Ship_CalmWaterZone_C : public AAthenaCalmWaterZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Rome_Vendor_Ship_CalmWaterZone.BP_Rome_Vendor_Ship_CalmWaterZone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
