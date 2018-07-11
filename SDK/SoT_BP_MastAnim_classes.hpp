#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MastAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_MastAnim.BP_MastAnim_C
// 0x00B4 (0x04F4 - 0x0440)
class UBP_MastAnim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B;// 0x0448(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_Root_C9432AB04292D2BCCBADF3827FE8CE4E;      // 0x0498(0x0048)
	float                                              Mast_Turning;                                             // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mast_Falling;                                             // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Falling_Anim_Index;                                       // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mast_Falling_Limit;                                       // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnRate;                                              // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_MastAnim.BP_MastAnim_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B();
	void SetMastAngle(float Angle);
	void InitializeMast(float FallingLimit);
	void ExecuteUbergraph_BP_MastAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
