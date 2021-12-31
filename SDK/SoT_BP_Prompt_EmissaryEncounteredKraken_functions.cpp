// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredKraken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryEncounteredKrakenEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredKraken_C::OnEmissaryEncounteredKraken(const FEmissaryEncounteredKrakenEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken"));

	UBP_Prompt_EmissaryEncounteredKraken_C_OnEmissaryEncounteredKraken_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryEncounteredKrakenEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredKraken_C::EmissaryEncounteredKraken(const FEmissaryEncounteredKrakenEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken"));

	UBP_Prompt_EmissaryEncounteredKraken_C_EmissaryEncounteredKraken_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredKraken_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate"));

	UBP_Prompt_EmissaryEncounteredKraken_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredKraken_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryEncounteredKraken_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredKraken_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryEncounteredKraken_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEncounteredKraken_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken"));

	UBP_Prompt_EmissaryEncounteredKraken_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
