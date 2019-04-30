#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Lovers_George_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C
// 0x0111 (0x05B1 - 0x04A0)
class UBP_Anim_TT_Lovers_George_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD65819347429F2D1B93BAB5DE9C5E99;      // 0x04A8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ABBC1D85444006C403CCC9B8390453DE;// 0x04F0(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_77721A36436B779683D8D3A376CC5DEA;      // 0x0540(0x0060)
	struct FScriptMulticastDelegate                    CutsceneMaterialEventDispatcher;                          // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AnimatingMaterialProperties;                              // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Lovers_George.BP_Anim_TT_Lovers_George_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_BeginMaterialUpdate();
	void AnimNotify_EndMaterialUpdate();
	void ExecuteUbergraph_BP_Anim_TT_Lovers_George(int EntryPoint);
	void CutsceneMaterialEventDispatcher__DelegateSignature(float GhostOpacity, float GhostBloom, float ShroudAmount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
