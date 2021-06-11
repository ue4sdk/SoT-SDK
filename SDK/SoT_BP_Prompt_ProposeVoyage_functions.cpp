// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ProposeVoyage_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOfferPurchasedEvent    Ev                             (Parm)

void UBP_Prompt_ProposeVoyage_C::Prompt_OfferPurchased(const struct FOfferPurchasedEvent& Ev)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased"));

	struct
	{
		struct FOfferPurchasedEvent    Ev;
	} params;

	params.Ev = Ev;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_ProposeVoyage_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_ProposeVoyage_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_ProposeVoyage_C::ExecuteUbergraph_BP_Prompt_ProposeVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
