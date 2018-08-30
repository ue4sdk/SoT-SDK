#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Proxy.BP_BountyRewardSkull_Proxy_C
// 0x0010 (0x08E0 - 0x08D0)
class ABP_BountyRewardSkull_Proxy_C : public ABountyRewardItemProxy
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BountyRewardSkull_Proxy.BP_BountyRewardSkull_Proxy_C");
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
