#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Proxy_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Legendary.BP_BountyRewardSkull_Proxy_Legendary_C
// 0x0008 (0x08E8 - 0x08E0)
class ABP_BountyRewardSkull_Proxy_Legendary_C : public ABP_BountyRewardSkull_Proxy_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BountyRewardSkull_Proxy_Legendary.BP_BountyRewardSkull_Proxy_Legendary_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
