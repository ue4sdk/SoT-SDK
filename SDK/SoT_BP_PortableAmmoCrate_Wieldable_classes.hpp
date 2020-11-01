#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PortableAmmoCrate_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PortableAmmoCrate_Wieldable.BP_PortableAmmoCrate_Wieldable_C
// 0x0040 (0x0840 - 0x0800)
class ABP_PortableAmmoCrate_Wieldable_C : public ALargeStaticMeshWieldableItem
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmmoStoreComponent*                         AmmoStore;                                                // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAddReloadAmmoActionRuleComponent*           AddReloadAmmoActionRule;                                  // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               HitVolume;                                                // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PortableAmmoCrate_Wieldable.BP_PortableAmmoCrate_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
