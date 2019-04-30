#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Lovers_Rose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C
// 0x0111 (0x05B1 - 0x04A0)
class UBP_Anim_TT_Lovers_Rose_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2B8E2C04F9528D033ED85AEB6357EA3;      // 0x04A8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FE3E56C34BFF5FD7643C0FB7D4EB4FE0;// 0x04F0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4733677640729F69F40FE8A13AC91C65;      // 0x0540(0x0060)
	struct FScriptMulticastDelegate                    CutsceneMaterialEventDispatcher;                          // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AnimatingMaterialProperties;                              // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Lovers_Rose.BP_Anim_TT_Lovers_Rose_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_BeginMaterialUpdate();
	void AnimNotify_EndMaterialUpdate();
	void ExecuteUbergraph_BP_Anim_TT_Lovers_Rose(int EntryPoint);
	void CutsceneMaterialEventDispatcher__DelegateSignature(float FadeAmount, float BloomAmount, float ShroudAmount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
