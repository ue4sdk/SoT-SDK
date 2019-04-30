#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Revealable_BaseMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Revealable_BaseMesh.BP_Revealable_BaseMesh_C
// 0x0028 (0x04D0 - 0x04A8)
class ABP_Revealable_BaseMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URevealableComponent*                        Revealable;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class URevealableAnimInstance_C>> AnimInstances;                                            // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Revealable_BaseMesh.BP_Revealable_BaseMesh_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Revealable_K2Node_ComponentBoundEvent_39_OnHide__DelegateSignature();
	void BndEvt__Revealable_K2Node_ComponentBoundEvent_44_OnCloseReveal__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Revealable_BaseMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
