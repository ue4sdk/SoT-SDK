// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryDiscoveredCargoRunCrate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.OnEmissaryDiscoveredCargoRunCrate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryDiscoveredCargoRunCrateNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::OnEmissaryDiscoveredCargoRunCrate(const FEmissaryDiscoveredCargoRunCrateNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.OnEmissaryDiscoveredCargoRunCrate"));

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_OnEmissaryDiscoveredCargoRunCrate_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.EmissaryDiscoveredCargoRunCrate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryDiscoveredCargoRunCrateNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::EmissaryDiscoveredCargoRunCrate(const FEmissaryDiscoveredCargoRunCrateNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.EmissaryDiscoveredCargoRunCrate"));

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_EmissaryDiscoveredCargoRunCrate_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.Evaluate"));

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C::ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredCargoRunCrate.BP_Prompt_EmissaryDiscoveredCargoRunCrate_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate"));

	UBP_Prompt_EmissaryDiscoveredCargoRunCrate_C_ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredCargoRunCrate_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
