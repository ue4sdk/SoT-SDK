#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Shores_Base_Human_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C
// 0x0110 (0x05B0 - 0x04A0)
class UBP_Anim_TT_Shores_Base_Human_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3F004C394CE85ECFC1A0D09CCD197751;      // 0x04A8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D76383B74E32236CAC6607AFC69AE0EE;// 0x04F0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E555218540BF69E570AB6EAF4D722D0A;      // 0x0540(0x0060)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Base_Human.BP_Anim_TT_Shores_Base_Human_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_TT_Shores_Base_Human(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom, float ShroudOpacity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
