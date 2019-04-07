#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_MagBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_MagBox.BP_Anim_TT_MagBox_C
// 0x0100 (0x05A0 - 0x04A0)
class UBP_Anim_TT_MagBox_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CC3322FD44C9A5051436B6BD121D5F96;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1E9E2EA24B85F60FD50383BE5792497B;      // 0x04F0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_791C461C4039D522E482A49DCB2B0B7C;// 0x0550(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_MagBox.BP_Anim_TT_MagBox_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_TT_MagBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
