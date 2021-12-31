// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySunk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.OnEmissarySunk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissarySunkNetworkEvent      NewParam                       (Parm)

void UBP_Prompt_EmissarySunk_C::OnEmissarySunk(const FEmissarySunkNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.OnEmissarySunk"));

	UBP_Prompt_EmissarySunk_C_OnEmissarySunk_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.EmissarySunk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissarySunkNetworkEvent      NewParam                       (Parm)

void UBP_Prompt_EmissarySunk_C::EmissarySunk(const FEmissarySunkNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.EmissarySunk"));

	UBP_Prompt_EmissarySunk_C_EmissarySunk_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissarySunk_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.Evaluate"));

	UBP_Prompt_EmissarySunk_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySunk_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissarySunk_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySunk_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissarySunk_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.ExecuteUbergraph_BP_Prompt_EmissarySunk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissarySunk_C::ExecuteUbergraph_BP_Prompt_EmissarySunk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.ExecuteUbergraph_BP_Prompt_EmissarySunk"));

	UBP_Prompt_EmissarySunk_C_ExecuteUbergraph_BP_Prompt_EmissarySunk_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
