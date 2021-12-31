// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySecuredLootOnShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySecuredLootOnShip_C::OnEmissarySecuredLootOnShip(const FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip"));

	UBP_Prompt_EmissarySecuredLootOnShip_C_OnEmissarySecuredLootOnShip_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySecuredLootOnShip_C::EmissarySecuredLootOnShip(const FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip"));

	UBP_Prompt_EmissarySecuredLootOnShip_C_EmissarySecuredLootOnShip_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissarySecuredLootOnShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate"));

	UBP_Prompt_EmissarySecuredLootOnShip_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySecuredLootOnShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissarySecuredLootOnShip_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySecuredLootOnShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissarySecuredLootOnShip_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissarySecuredLootOnShip_C::ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip"));

	UBP_Prompt_EmissarySecuredLootOnShip_C_ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
