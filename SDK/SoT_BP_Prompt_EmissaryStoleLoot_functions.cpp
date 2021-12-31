// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryStoleLoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryStoleLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryStoleLoot_C::OnEmissaryStoleLoot(const FEmissaryStoleLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot"));

	UBP_Prompt_EmissaryStoleLoot_C_OnEmissaryStoleLoot_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FEmissaryStoleLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryStoleLoot_C::EmissaryStoleLoot(const FEmissaryStoleLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot"));

	UBP_Prompt_EmissaryStoleLoot_C_EmissaryStoleLoot_Params params;
	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryStoleLoot_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate"));

	UBP_Prompt_EmissaryStoleLoot_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryStoleLoot_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryStoleLoot_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryStoleLoot_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_EmissaryStoleLoot_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryStoleLoot_C::ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot"));

	UBP_Prompt_EmissaryStoleLoot_C_ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
