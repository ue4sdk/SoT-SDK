#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Revealable_NPCGenericSkeleton_AnimInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Revealable_NPCGenericSkeleton_AnimInstance.Revealable_NPCGenericSkeleton_AnimInstance_C
// 0x0391 (0x07D1 - 0x0440)
class URevealable_NPCGenericSkeleton_AnimInstance_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F311CCCC4E2CD30FEE2288B31B503713;      // 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3A938CB4ED7CE3B59DD8A9C65F605B9;// 0x0490(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE;// 0x04D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_398DD81E4ABAD5654FD247887760A733;// 0x0510(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6C3DCE2412707C28F8AB6926A3E2600;// 0x0550(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_490AC8774EA4CC7EF4019D86CA4BBFEA;// 0x05A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA904D7A4313B4BAC4CE1B93C9BD0002;// 0x05F0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_36615B0E456376D8C9D1B0824F83FF0E;// 0x0648(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8293CD324D5A34C3E2B9C485B302DECE;// 0x0690(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C7960A7484843B5E72726A76CA1BDBF;// 0x06E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A59E778440C527010EE873AF2C9D63E0;// 0x0728(0x00A8)
	bool                                               PlayAnimation;                                            // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass Revealable_NPCGenericSkeleton_AnimInstance.Revealable_NPCGenericSkeleton_AnimInstance_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Revealable_NPCGenericSkeleton_AnimInstance_AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE();
	void SetIsPlayingAnim(bool IsPlaying);
	void ExecuteUbergraph_Revealable_NPCGenericSkeleton_AnimInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
