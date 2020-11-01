#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PortableAmmoCrate_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PortableAmmoCrate_Proxy.BP_PortableAmmoCrate_Proxy_C
// 0x0028 (0x0828 - 0x0800)
class ABP_PortableAmmoCrate_Proxy_C : public AStaticMeshFloatingItemProxy
{
public:
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmmoStoreComponent*                         AmmoStore;                                                // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAddReloadAmmoActionRuleComponent*           AddReloadAmmoActionRule;                                  // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URetractableItemProxyComponent*              RetractableItemProxy;                                     // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PortableAmmoCrate_Proxy.BP_PortableAmmoCrate_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
