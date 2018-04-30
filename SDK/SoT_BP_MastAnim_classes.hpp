#pragma once

// Sea of Thieves (1.0.5) SDK

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
	unsigned char                                      UnknownData00[0xB4];                                      // 0x0440(0x00B4) MISSED OFFSET

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
