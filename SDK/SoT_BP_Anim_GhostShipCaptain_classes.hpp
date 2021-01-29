#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_GhostShipCaptain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_GhostShipCaptain.BP_Anim_GhostShipCaptain_C
// 0x035C (0x095C - 0x0600)
class UBP_Anim_GhostShipCaptain_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F8A273C14F91208C2687698D3542FF2C;      // 0x0608(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_C67C9C33471ABFAF9A6B63896EB7DB82;  // 0x0650(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5E8BC6EE4E39DC558323A7835E29C2E7;// 0x06D0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0867DDAB420C0A193B6EEC8FA185B283;// 0x0718(0x0048)
	struct FAnimNode_HIKLookAt                         AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058; // 0x0760(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F419EB;// 0x07E8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D35E79745C1164A5D8E88A879104C61;// 0x0898(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94631CD94516DC2280196F8C145D8147;// 0x08F8(0x0060)
	float                                              IKAlpha;                                                  // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_GhostShipCaptain.BP_Anim_GhostShipCaptain_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F419EB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_GhostShipCaptain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
