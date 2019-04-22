// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Revealable_Skeleton_Key_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Revealable_Skeleton_Key.Revealable_Skeleton_Key_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Revealable_Skeleton_Key_AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE
// (BlueprintEvent)

void URevealable_Skeleton_Key_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Revealable_Skeleton_Key_AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Revealable_Skeleton_Key.Revealable_Skeleton_Key_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Revealable_Skeleton_Key_AnimGraphNode_TransitionResult_8290739D47E8E65C0DCFE7BD011CF2FE"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Revealable_Skeleton_Key.Revealable_Skeleton_Key_C.SetIsPlayingAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlaying                      (Parm, ZeroConstructor, IsPlainOldData)

void URevealable_Skeleton_Key_C::SetIsPlayingAnim(bool IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Revealable_Skeleton_Key.Revealable_Skeleton_Key_C.SetIsPlayingAnim"));

	struct
	{
		bool                           IsPlaying;
	} params;

	params.IsPlaying = IsPlaying;

	UObject::ProcessEvent(fn, &params);
}


// Function Revealable_Skeleton_Key.Revealable_Skeleton_Key_C.ExecuteUbergraph_Revealable_Skeleton_Key
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URevealable_Skeleton_Key_C::ExecuteUbergraph_Revealable_Skeleton_Key(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Revealable_Skeleton_Key.Revealable_Skeleton_Key_C.ExecuteUbergraph_Revealable_Skeleton_Key"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
