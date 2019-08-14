#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sarcophagus_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sarcophagus.BP_Sarcophagus_C
// 0x0048 (0x0580 - 0x0538)
class ABP_Sarcophagus_C : public AInteractableObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      Interactable;                                             // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClientSkeletalMeshComponent*                Corpse;                                                   // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClientSkeletalMeshComponent*                Sarcophagus;                                              // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasBeenInteractedWith;                                    // 0x0568(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHasBeenInteracted;                                      // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Sarcophagus.BP_Sarcophagus_C"));
		return ptr;
	}


	bool CanInteract(class AActor* InInteractor);
	void Open();
	void TriggerOpenAnimation();
	struct FText GetObjectDisplayName();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnInteract_Server(class AActor* InInteractor);
	void Blueprint_OnInteract_Client(class AActor* InInteractor);
	void ExecuteUbergraph_BP_Sarcophagus(int EntryPoint);
	void OnHasBeenInteracted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
