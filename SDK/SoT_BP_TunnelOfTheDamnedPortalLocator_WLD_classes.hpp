#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamnedPortalLocator_WLD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamnedPortalLocator_WLD.BP_TunnelOfTheDamnedPortalLocator_WLD_C
// 0x0018 (0x0420 - 0x0408)
class ABP_TunnelOfTheDamnedPortalLocator_WLD_C : public APortalLocatorActor
{
public:
	UChildActorComponent*                              SignalAnchor;                                             // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              CalmWater;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Visuals;                                                  // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamnedPortalLocator_WLD.BP_TunnelOfTheDamnedPortalLocator_WLD_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
