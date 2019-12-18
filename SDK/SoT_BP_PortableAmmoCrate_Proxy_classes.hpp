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
// 0x0028 (0x07C0 - 0x0798)
class ABP_PortableAmmoCrate_Proxy_C : public AStaticMeshFloatingItemProxy
{
public:
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmmoStoreComponent*                         AmmoStore;                                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAddReloadAmmoActionRuleComponent*           AddReloadAmmoActionRule;                                  // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URetractableItemProxyComponent*              RetractableItemProxy;                                     // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
