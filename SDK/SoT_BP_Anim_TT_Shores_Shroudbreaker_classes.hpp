#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Shores_Shroudbreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Shroudbreaker.BP_Anim_TT_Shores_Shroudbreaker_C
// 0x0110 (0x05B0 - 0x04A0)
class UBP_Anim_TT_Shores_Shroudbreaker_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6B38826749EEFC044F2622B9BF78C547;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_065B39F0421B565F4B2E678FB0480E45;      // 0x04F0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C054BFEE4BDFD94015D052850D02239D;// 0x0550(0x0050)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Shroudbreaker.BP_Anim_TT_Shores_Shroudbreaker_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_TT_Shores_Shroudbreaker(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom, float ShroudOpacity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
