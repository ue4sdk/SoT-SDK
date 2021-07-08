#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0040 (0x07B0 - 0x0770)
class ABP_PortableAmmoCrate_Wieldable_C : public ALargeStaticMeshWieldableItem
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAmmoStoreComponent*                         AmmoStore;                                                // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAddReloadAmmoActionRuleComponent*           AddReloadAmmoActionRule;                                  // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               HitVolume;                                                // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
