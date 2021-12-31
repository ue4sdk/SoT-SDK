#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_Wieldable.BP_CollectorsChest_Wieldable_C
// 0x0068 (0x0838 - 0x07D0)
class ABP_CollectorsChest_Wieldable_C : public ACollectorsChestStaticWieldableItem
{
public:
	UMaterialManipulationComponent*                    MaterialManipulation;                                     // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UOpenableItemMaterialAnimationReactionComponent*   OpenableItemMaterialAnimationReaction;                    // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMaterialAnimatorComponent*                        MaterialAnimator;                                         // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UBoxComponent*                                     HitVolume;                                                // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitter;                                   // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UGoldInContainerComponent*                         GoldInContainer;                                          // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UQuestBookPagesInContainerComponent*               QuestBookPagesInContainer;                                // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCollectorsChestItemSlotInteractable*              ItemSlotInteractable_1;                                   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCollectorsChestItemSlotInteractable*              ItemSlotInteractable_3;                                   // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCollectorsChestItemSlotInteractable*              ItemSlotInteractable_2;                                   // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPickupableComponent*                              Pickupable;                                               // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UUsableWieldableComponent*                         UsableWieldable;                                          // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWieldableInteractableComponent*                   WieldableInteractable;                                    // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectorsChest_Wieldable.BP_CollectorsChest_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
