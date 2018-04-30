#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Cannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C
// 0x0478 (0x08C8 - 0x0450)
class UBP_Anim_Cannon_C : public UCannonAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x478];                                     // 0x0450(0x0478) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E();
	void AnimNotify_FireEnd();
	void ExecuteUbergraph_BP_Anim_Cannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
