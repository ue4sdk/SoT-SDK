// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ProposeVoyage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_ProposeVoyage_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.PostInitialize"));

	UBP_Prompt_ProposeVoyage_C_PostInitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FOfferPurchasedEvent   Ev                             (Parm)

void UBP_Prompt_ProposeVoyage_C::Prompt_OfferPurchased(const FAthena_FOfferPurchasedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased"));

	UBP_Prompt_ProposeVoyage_C_Prompt_OfferPurchased_Params params;
	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_ProposeVoyage_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_ProposeVoyage_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_ProposeVoyage_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate"));

	UBP_Prompt_ProposeVoyage_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_ProposeVoyage_C::ExecuteUbergraph_BP_Prompt_ProposeVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage"));

	UBP_Prompt_ProposeVoyage_C_ExecuteUbergraph_BP_Prompt_ProposeVoyage_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
