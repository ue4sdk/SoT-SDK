#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannonball_chain_shot_01_a_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannonball_chain_shot_01_a_Proxy.BP_cmn_cannonball_chain_shot_01_a_Proxy_C
// 0x0000 (0x0688 - 0x0688)
class ABP_cmn_cannonball_chain_shot_01_a_Proxy_C : public ABP_CannonBallProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannonball_chain_shot_01_a_Proxy.BP_cmn_cannonball_chain_shot_01_a_Proxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
