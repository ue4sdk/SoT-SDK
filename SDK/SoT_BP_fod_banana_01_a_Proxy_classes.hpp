#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_banana_01_a_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_banana_01_a_Proxy.BP_fod_banana_01_a_Proxy_C
// 0x0000 (0x06E0 - 0x06E0)
class ABP_fod_banana_01_a_Proxy_C : public ABP_BananaProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_fod_banana_01_a_Proxy.BP_fod_banana_01_a_Proxy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
