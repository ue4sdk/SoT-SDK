// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryLevelRankChange_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryLevel_FEmissaryLevelRankChange NewParam                       (Parm)

void UBP_Prompt_EmissaryLevelRankChange_C::OnEmissaryLevelRankChange(const FEmissaryLevel_FEmissaryLevelRankChange& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange"));

	UBP_Prompt_EmissaryLevelRankChange_C_OnEmissaryLevelRankChange_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryLevel_FEmissaryLevelRankChange NewParam                       (Parm)

void UBP_Prompt_EmissaryLevelRankChange_C::EmissaryLevelRankChange(const FEmissaryLevel_FEmissaryLevelRankChange& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange"));

	UBP_Prompt_EmissaryLevelRankChange_C_EmissaryLevelRankChange_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryLevelRankChange_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate"));

	UBP_Prompt_EmissaryLevelRankChange_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryLevelRankChange_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryLevelRankChange_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryLevelRankChange_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryLevelRankChange_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryLevelRankChange_C::ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange"));

	UBP_Prompt_EmissaryLevelRankChange_C_ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
