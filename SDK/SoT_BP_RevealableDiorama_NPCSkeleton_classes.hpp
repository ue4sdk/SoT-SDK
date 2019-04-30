#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevealableDiorama_NPCSkeleton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevealableDiorama_NPCSkeleton.BP_RevealableDiorama_NPCSkeleton_C
// 0x0020 (0x04C8 - 0x04A8)
class ABP_RevealableDiorama_NPCSkeleton_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URevealableComponent*                        Revealable;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevealableDiorama_NPCSkeleton.BP_RevealableDiorama_NPCSkeleton_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Revealable_K2Node_ComponentBoundEvent_15_OnCloseReveal__DelegateSignature();
	void BndEvt__Revealable_K2Node_ComponentBoundEvent_24_OnHide__DelegateSignature();
	void ExecuteUbergraph_BP_RevealableDiorama_NPCSkeleton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
