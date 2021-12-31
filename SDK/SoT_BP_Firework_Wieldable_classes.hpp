#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Firework_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Firework_Wieldable.BP_Firework_Wieldable_C
// 0x0028 (0x07B8 - 0x0790)
class ABP_Firework_Wieldable_C : public AStaticMeshWieldableItem
{
public:
	UUsableWieldableComponent*                         UsableWieldable;                                          // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWieldableInteractableComponent*                   WieldableInteractable;                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPickupableComponent*                              Pickupable;                                               // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UConsumableWieldableComponent*                     ConsumableWieldable;                                      // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UInventoryItemComponent*                           InventoryItem;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Firework_Wieldable.BP_Firework_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
