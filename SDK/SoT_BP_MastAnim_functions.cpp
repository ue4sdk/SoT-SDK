// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MastAnim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MastAnim.BP_MastAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B
// (BlueprintEvent)

void UBP_MastAnim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastAnim.BP_MastAnim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B");

	UBP_MastAnim_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_MastAnim_AnimGraphNode_SequenceEvaluator_289A9AD845D48FFB76FDEA99E492FF2B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastAnim.BP_MastAnim_C.SetMastAngle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MastAnim_C::SetMastAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastAnim.BP_MastAnim_C.SetMastAngle");

	UBP_MastAnim_C_SetMastAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastAnim.BP_MastAnim_C.InitializeMast
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FallingLimit                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MastAnim_C::InitializeMast(float FallingLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastAnim.BP_MastAnim_C.InitializeMast");

	UBP_MastAnim_C_InitializeMast_Params params;
	params.FallingLimit = FallingLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastAnim.BP_MastAnim_C.ExecuteUbergraph_BP_MastAnim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MastAnim_C::ExecuteUbergraph_BP_MastAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastAnim.BP_MastAnim_C.ExecuteUbergraph_BP_MastAnim");

	UBP_MastAnim_C_ExecuteUbergraph_BP_MastAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
