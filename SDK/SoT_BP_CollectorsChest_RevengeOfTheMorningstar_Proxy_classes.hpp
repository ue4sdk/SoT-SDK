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
// 0x0048 (0x0928 - 0x08E0)
class ABP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C : public ACollectorsChestItemProxy
{
public:
	class UQuestBookPagesInContainerComponent*         QuestBookPagesInContainer;                                // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGoldInContainerComponent*                   GoldInContainer;                                          // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlintComponent*                             Glint;                                                    // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractbale_3;                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_2;                                   // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCollectorsChestItemSlotInteractable*        ItemSlotInteractable_1;                                   // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
