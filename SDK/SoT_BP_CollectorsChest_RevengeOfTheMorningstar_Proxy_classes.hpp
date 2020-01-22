#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_RevengeOfTheMorningstar_Proxy.BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C
// 0x0068 (0x08C8 - 0x0860)
class ABP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C : public ACollectorsChestItemProxyStatic
{
public:
	class UOpenableItemMaterialAnimationReactionComponent* OpenableItemMaterialAnimationReaction;                    // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialAnimatorComponent*                  MaterialAnimator;                                         // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOpenableItemMeshAnimationReactionComponent* OpenableItemMeshAnimationReaction;                        // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshAnimatorComponent*                      MeshAnimator;                                             // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPagesInContainerComponent*         QuestBookPagesInContainer;                                // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGoldInContainerComponent*                   GoldInContainer;                                          // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractbale_3;                                   // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_2;                                   // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_1;                                   // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectorsChest_RevengeOfTheMorningstar_Proxy.BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
