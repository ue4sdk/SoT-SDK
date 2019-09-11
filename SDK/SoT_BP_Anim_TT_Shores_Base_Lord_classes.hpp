#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Shores_Base_Lord_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Base_Lord.BP_Anim_TT_Shores_Base_Lord_C
// 0x0110 (0x05B0 - 0x04A0)
class UBP_Anim_TT_Shores_Base_Lord_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_953ED0A14B4521259F86EDBBFCAA9DA9;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0992DBA44214A200A7DA6C889016BBBE;      // 0x04F0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8E0C234B4A5239926F042983A77D50FA;// 0x0550(0x0050)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Base_Lord.BP_Anim_TT_Shores_Base_Lord_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_TT_Shores_Base_Lord(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom, float ShroudOpacity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
