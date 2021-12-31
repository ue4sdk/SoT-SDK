#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Contract_3rd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C
// 0x0101 (0x0731 - 0x0630)
class UBP_Anim_Contract_3rd_C : public UWieldableItemAnimationInstance
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FAnimNode_Root                                     AnimGraphNode_Root_36198F564211C9DF22D9E3BA855A0136;      // 0x0638(0x0048)
	FAnimNode_Slot                                     AnimGraphNode_Slot_47D4FF824E791C777B72BBA3A330516D;      // 0x0680(0x0060)
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator_CF1859694B295D3418EFB18A5F3FF981;// 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Contract_3rd.BP_Anim_Contract_3rd_C"));
		return ptr;
	}


	void OnUseStarted(UClass* InputID, const FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(UClass* InputID);
	void ExecuteUbergraph_BP_Anim_Contract_3rd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
