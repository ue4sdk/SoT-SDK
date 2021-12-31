// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredSkellyFort_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryEncounteredSkellyFortNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::OnEmissaryEncounteredSkellyFort(const FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort"));

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_OnEmissaryEncounteredSkellyFort_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryEncounteredSkellyFortNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::EmissaryEncounteredSkellyFort(const FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort"));

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_EmissaryEncounteredSkellyFort_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate"));

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort"));

	UBP_Prompt_EmissaryEncounteredSkellyFort_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
