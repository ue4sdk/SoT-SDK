#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SirenTrident_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C
// 0x0034 (0x07EC - 0x07B8)
class ABP_SirenTrident_Proxy_C : public AStaticSimpleBootyItemProxy
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UGlintComponent*                                   Glint;                                                    // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAmmoEffectsComponent*                             AmmoEffects;                                              // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAmmoTransferComponent*                            AmmoTransfer;                                             // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UInteractableComponent*                            Interactable;                                             // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector                                            LocalInteractionOffset;                                   // 0x07E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C"));
		return ptr;
	}


	FVector GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SirenTrident_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
