// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEntitlementPurchased_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEntitlementPurchasedEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEntitlementPurchased_C::OnEmissaryEntitlementPurchasedFunc(const struct FEmissaryEntitlementPurchasedEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc"));

	struct
	{
		struct FEmissaryEntitlementPurchasedEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEntitlementPurchasedEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEntitlementPurchased_C::EmissaryEntitlementPurchased(const struct FEmissaryEntitlementPurchasedEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased"));

	struct
	{
		struct FEmissaryEntitlementPurchasedEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEntitlementPurchased_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEntitlementPurchased_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEntitlementPurchased_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEntitlementPurchased_C::ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased"));

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
