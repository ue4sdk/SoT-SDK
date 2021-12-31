// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySoldLoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.OnEmissarySoldLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissarySoldLootNetworkEvent  NewParam                       (Parm)

void UBP_Prompt_EmissarySoldLoot_C::OnEmissarySoldLoot(const FEmissarySoldLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.OnEmissarySoldLoot"));

	UBP_Prompt_EmissarySoldLoot_C_OnEmissarySoldLoot_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.EmissarySoldLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissarySoldLootNetworkEvent  NewParam                       (Parm)

void UBP_Prompt_EmissarySoldLoot_C::EmissarySoldLoot(const FEmissarySoldLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.EmissarySoldLoot"));

	UBP_Prompt_EmissarySoldLoot_C_EmissarySoldLoot_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissarySoldLoot_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.Evaluate"));

	UBP_Prompt_EmissarySoldLoot_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySoldLoot_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissarySoldLoot_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySoldLoot_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissarySoldLoot_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.ExecuteUbergraph_BP_Prompt_EmissarySoldLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissarySoldLoot_C::ExecuteUbergraph_BP_Prompt_EmissarySoldLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.ExecuteUbergraph_BP_Prompt_EmissarySoldLoot"));

	UBP_Prompt_EmissarySoldLoot_C_ExecuteUbergraph_BP_Prompt_EmissarySoldLoot_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
