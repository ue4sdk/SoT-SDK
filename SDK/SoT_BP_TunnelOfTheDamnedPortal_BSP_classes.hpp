#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamnedPortal_BSP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_BSP.BP_TunnelOfTheDamnedPortal_BSP_C
// 0x0008 (0x0658 - 0x0650)
class ABP_TunnelOfTheDamnedPortal_BSP_C : public ABP_TunnelOfTheDamnedPortal_Ship_C
{
public:
	UChildActorComponent*                              PortalEffects;                                            // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_BSP.BP_TunnelOfTheDamnedPortal_BSP_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
