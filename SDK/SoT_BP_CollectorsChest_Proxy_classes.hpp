#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C
// 0x00C1 (0x0921 - 0x0860)
class ABP_CollectorsChest_Proxy_C : public ACollectorsChestItemProxyStatic
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UStaticMeshComponent*                              WaterOcclusionVolume;                                     // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMaterialAnimatorComponent*                        MaterialAnimator;                                         // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UOpenableItemMeshAnimationReactionComponent*       OpenableItemMeshAnimationReaction;                        // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMeshAnimatorComponent*                            MeshAnimator;                                             // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UOpenableItemMaterialAnimationReactionComponent*   OpenableItemMaterialAnimationReaction;                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UGlintComponent*                                   Glint;                                                    // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UQuestBookPagesInContainerComponent*               QuestBookPagesInContainer;                                // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UGoldInContainerComponent*                         GoldInContainer;                                          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   Scene;                                                    // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitter;                                   // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCollectorsChestItemSlotInteractable*              ItemSlotInteractable_3;                                   // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCollectorsChestItemSlotInteractable*              ItemSlotInteractable_2;                                   // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCollectorsChestItemSlotInteractable*              ItemSlotInteractable_1;                                   // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UInteractableComponent*                            Interactable;                                             // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FObjectMessagingHandle                             OnDroppedHandle;                                          // 0x08D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HideWaterOcclusionVolume;                                 // 0x0920(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C"));
		return ptr;
	}


	void OnRep_HideWaterOcclusionVolume();
	bool IsAttachedToShip();
	FVector GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ItemDropped(const FEventWieldableItemDropped& EventParam);
	void ExecuteUbergraph_BP_CollectorsChest_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
