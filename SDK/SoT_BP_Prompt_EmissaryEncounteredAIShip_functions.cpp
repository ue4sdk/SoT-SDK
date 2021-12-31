// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredAIShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryEncounteredAIShipEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredAIShip_C::OnEmissaryEncounteredAIShip(const FEmissaryEncounteredAIShipEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip"));

	UBP_Prompt_EmissaryEncounteredAIShip_C_OnEmissaryEncounteredAIShip_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryEncounteredAIShipEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredAIShip_C::EmissaryEncounteredAIShip(const FEmissaryEncounteredAIShipEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip"));

	UBP_Prompt_EmissaryEncounteredAIShip_C_EmissaryEncounteredAIShip_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredAIShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate"));

	UBP_Prompt_EmissaryEncounteredAIShip_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredAIShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryEncounteredAIShip_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredAIShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryEncounteredAIShip_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEncounteredAIShip_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip"));

	UBP_Prompt_EmissaryEncounteredAIShip_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
