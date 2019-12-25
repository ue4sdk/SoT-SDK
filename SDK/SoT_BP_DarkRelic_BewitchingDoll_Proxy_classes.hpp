#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DarkRelic_BewitchingDoll_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DarkRelic_BewitchingDoll_Proxy.BP_DarkRelic_BewitchingDoll_Proxy_C
// 0x0000 (0x0850 - 0x0850)
class ABP_DarkRelic_BewitchingDoll_Proxy_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DarkRelic_BewitchingDoll_Proxy.BP_DarkRelic_BewitchingDoll_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
