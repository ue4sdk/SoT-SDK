#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicFogVolume_Undersea_Treasury_1C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicFogVolume_Undersea_Treasury_1C.BP_DynamicFogVolume_Undersea_Treasury_1C_C
// 0x0000 (0x03F4 - 0x03F4)
class ABP_DynamicFogVolume_Undersea_Treasury_1C_C : public ABP_FogVolume_Undersea_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicFogVolume_Undersea_Treasury_1C.BP_DynamicFogVolume_Undersea_Treasury_1C_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
