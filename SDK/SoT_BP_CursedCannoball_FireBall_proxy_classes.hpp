#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedCannoball_FireBall_proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CursedCannoball_FireBall_proxy.BP_CursedCannoball_FireBall_proxy_C
// 0x0000 (0x0650 - 0x0650)
class ABP_CursedCannoball_FireBall_proxy_C : public ABP_CannonBallProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CursedCannoball_FireBall_proxy.BP_CursedCannoball_FireBall_proxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
