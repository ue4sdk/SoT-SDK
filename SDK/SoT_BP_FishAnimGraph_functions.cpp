// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishAnimGraph_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_StartJump
// (BlueprintCallable, BlueprintEvent)

void UBP_FishAnimGraph_C::AnimNotify_StartJump()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_StartJump"));

	UBP_FishAnimGraph_C_AnimNotify_StartJump_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_EndJump
// (BlueprintCallable, BlueprintEvent)

void UBP_FishAnimGraph_C::AnimNotify_EndJump()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_EndJump"));

	UBP_FishAnimGraph_C_AnimNotify_EndJump_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FishAnimGraph.BP_FishAnimGraph_C.ExecuteUbergraph_BP_FishAnimGraph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FishAnimGraph_C::ExecuteUbergraph_BP_FishAnimGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FishAnimGraph.BP_FishAnimGraph_C.ExecuteUbergraph_BP_FishAnimGraph"));

	UBP_FishAnimGraph_C_ExecuteUbergraph_BP_FishAnimGraph_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
