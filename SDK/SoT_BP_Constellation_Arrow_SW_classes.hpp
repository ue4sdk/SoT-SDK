#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Constellation_Arrow_SW_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Constellation_Arrow_SW.BP_Constellation_Arrow_SW_C
// 0x0000 (0x04D0 - 0x04D0)
class ABP_Constellation_Arrow_SW_C : public ABP_Constellation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Constellation_Arrow_SW.BP_Constellation_Arrow_SW_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
