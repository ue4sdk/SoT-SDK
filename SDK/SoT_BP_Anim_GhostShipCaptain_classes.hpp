#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x034C (0x078C - 0x0440)
class UBP_Anim_GhostShipCaptain_C : public UNPCAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x34C];                                     // 0x0440(0x034C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_GhostShipCaptain.BP_Anim_GhostShipCaptain_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_HIKLookAt_559E08FE4278B4C88466CCBBB6544058();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_GhostShipCaptain_AnimGraphNode_BlendListByBool_CA8E748947CB37638D1D77AF82F419EB();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_GhostShipCaptain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
