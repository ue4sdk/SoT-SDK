#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_gmp_repair_wood_02_a_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_gmp_repair_wood_02_a_Proxy.BP_gmp_repair_wood_02_a_Proxy_C
// 0x0000 (0x0700 - 0x0700)
class ABP_gmp_repair_wood_02_a_Proxy_C : public ABP_WoodPlankProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_gmp_repair_wood_02_a_Proxy.BP_gmp_repair_wood_02_a_Proxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
