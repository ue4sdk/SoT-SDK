#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Portal_CalmWaterZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Portal_CalmWaterZone.BP_Portal_CalmWaterZone_C
// 0x0000 (0x03F8 - 0x03F8)
class ABP_Portal_CalmWaterZone_C : public AAthenaCalmWaterZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Portal_CalmWaterZone.BP_Portal_CalmWaterZone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
