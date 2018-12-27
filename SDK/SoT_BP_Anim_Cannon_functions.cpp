// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Cannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Cannon.BP_Anim_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E
// (BlueprintEvent)

void UBP_Anim_Cannon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Cannon.BP_Anim_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E");

	UBP_Anim_Cannon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Cannon_AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_Cannon_C::AnimNotify_FireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Cannon.BP_Anim_Cannon_C.AnimNotify_FireEnd");

	UBP_Anim_Cannon_C_AnimNotify_FireEnd_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Cannon_C::ExecuteUbergraph_BP_Anim_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Cannon.BP_Anim_Cannon_C.ExecuteUbergraph_BP_Anim_Cannon");

	UBP_Anim_Cannon_C_ExecuteUbergraph_BP_Anim_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
