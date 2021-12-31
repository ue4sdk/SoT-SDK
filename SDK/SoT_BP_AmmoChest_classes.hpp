#pragma once

// Sea of Thieves (2) SDK

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
// 0x0040 (0x04A8 - 0x0468)
class ABP_AmmoChest_C : public AAmmoChest
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UBoxComponent*                                     Hits;                                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UInteractableComponent*                            Interactable;                                             // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FWwiseEmitter                                      Emitter;                                                  // 0x0480(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	UMaterialInstanceDynamic*                          DynamicMaterial;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C"));
		return ptr;
	}


	FText GetObjectDisplayName();
	FVector GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnInteract_Client(AActor* InInteractor);
	void Blueprint_OnInteract_Server(AActor* InInteractor);
	void ExecuteUbergraph_BP_AmmoChest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
