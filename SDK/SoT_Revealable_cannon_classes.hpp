#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Revealable_cannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Revealable_cannon.Revealable_cannon_C
// 0x0391 (0x0831 - 0x04A0)
class URevealable_cannon_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_36975A32421D25648DD008B1CE5DE45C;      // 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3A938CB4ED7CE3B59DD8A9C65F605B9;// 0x04F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE;// 0x0530(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_398DD81E4ABAD5654FD247887760A733;// 0x0570(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6C3DCE2412707C28F8AB6926A3E2600;// 0x05B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_490AC8774EA4CC7EF4019D86CA4BBFEA;// 0x0608(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA904D7A4313B4BAC4CE1B93C9BD0002;// 0x0650(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_36615B0E456376D8C9D1B0824F83FF0E;// 0x06A8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8293CD324D5A34C3E2B9C485B302DECE;// 0x06F0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C7960A7484843B5E72726A76CA1BDBF;// 0x0740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6CA0D06345B83776513DDF8914A267C8;// 0x0788(0x00A8)
	bool                                               PlayAnimation;                                            // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass Revealable_cannon.Revealable_cannon_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revealable_cannon_AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE();
	void SetIsPlayingAnim(bool IsPlaying);
	void ExecuteUbergraph_Revealable_cannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
