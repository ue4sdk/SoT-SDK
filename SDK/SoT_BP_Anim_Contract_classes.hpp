#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Contract_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Contract.BP_Anim_Contract_C
// 0x0101 (0x0731 - 0x0630)
class UBP_Anim_Contract_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_73F950E44B1E95BA84B91BB03A11132A;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16366ACD4549E27332E3A7914E57741F;      // 0x0680(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CC5EC8B44857E42A21C742BEDAF53F84;// 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_Anim_Contract.BP_Anim_Contract_C");
		return ptr;
	}


	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStopped(class UClass* InputID);
	void ExecuteUbergraph_BP_Anim_Contract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
