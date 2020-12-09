#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedCannoball_Grenade_Scatter_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedCannoball_Grenade_Scatter_Proxy.BP_CursedCannoball_Grenade_Scatter_Proxy_C
// 0x0000 (0x06D0 - 0x06D0)
class ABP_CursedCannoball_Grenade_Scatter_Proxy_C : public ABP_CannonBallProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedCannoball_Grenade_Scatter_Proxy.BP_CursedCannoball_Grenade_Scatter_Proxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
