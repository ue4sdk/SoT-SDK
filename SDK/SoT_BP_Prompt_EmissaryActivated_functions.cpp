// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryActivated_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryLevel_FEmissaryActivated NewParam                       (Parm)

void UBP_Prompt_EmissaryActivated_C::OnEmissaryActivatedFunc(const FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc"));

	UBP_Prompt_EmissaryActivated_C_OnEmissaryActivatedFunc_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryLevel_FEmissaryActivated NewParam                       (Parm)

void UBP_Prompt_EmissaryActivated_C::EmissaryActivated(const FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated"));

	UBP_Prompt_EmissaryActivated_C_EmissaryActivated_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryActivated_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate"));

	UBP_Prompt_EmissaryActivated_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryActivated_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryActivated_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryActivated_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryActivated_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryActivated_C::ExecuteUbergraph_BP_Prompt_EmissaryActivated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated"));

	UBP_Prompt_EmissaryActivated_C_ExecuteUbergraph_BP_Prompt_EmissaryActivated_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
