#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_NPC.BP_Anim_NPC_C
// 0x0F28 (0x1368 - 0x0440)
class UBP_Anim_NPC_C : public UNPCAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xF28];                                     // 0x0440(0x0F28) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_NPC.BP_Anim_NPC_C");
		return ptr;
	}


	void PlayItemAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_HIKLookAt_EEAD7D6244A884C61ADBCF80093831EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_SequencePlayer_A1A96C8F4FA0C88004FEA9B193BBC6D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_SequencePlayer_0502F6954CD4F84885DE03B203FAA8F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_SequencePlayer_9927E3AE4B82AE003E8B6681B2E08309();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_SequencePlayer_029EE12A4EF80CF396A5BA8003D57382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_SequencePlayer_4E02885E41EFF57B50C89389FF9A70BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_AnimGraphNode_BlendListByBool_B01736E249D02A7A50013BA31AE82AEC();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_StartLookat();
	void AnimNotify_StopLookAt();
	void AnimNotify_IdleVariantChange();
	void AnimNotify_NPCItemAnimation();
	void AnimNotify_InactiveVariantChange();
	void AnimNotify_InteractVariantChange();
	void ExecuteUbergraph_BP_Anim_NPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
