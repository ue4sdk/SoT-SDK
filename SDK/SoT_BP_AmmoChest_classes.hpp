#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AmmoChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C
// 0x0040 (0x0560 - 0x0520)
class ABP_AmmoChest_C : public AInteractableObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        AmmoChest;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitter                               Emitter;                                                  // 0x0538(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C");
		return ptr;
	}


	struct FText GetObjectDisplayName();
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnInteract_Client(class AActor** InInteractor);
	void Blueprint_OnInteract_Server(class AActor** InInteractor);
	void ExecuteUbergraph_BP_AmmoChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
