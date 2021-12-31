// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CosmeticPurchased_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::OnPlayerEntitlementUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated"));

	UBP_Prompt_CosmeticPurchased_C_OnPlayerEntitlementUpdated_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UClass*                        AccessKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<UClass*>                CategoryType                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FPrioritisedPromptWithHandle   PromptCosmeticPurchased        (Parm)
// FPrioritisedPromptWithHandle   PromptVisitCustomizationChest  (Parm)

void UBP_Prompt_CosmeticPurchased_C::SetCosmeticPromptInfo(UClass* AccessKey, const FPrioritisedPromptWithHandle& PromptCosmeticPurchased, const FPrioritisedPromptWithHandle& PromptVisitCustomizationChest, TArray<UClass*>* CategoryType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo"));

	UBP_Prompt_CosmeticPurchased_C_SetCosmeticPromptInfo_Params params;
	params.AccessKey = AccessKey;
	params.PromptCosmeticPurchased = PromptCosmeticPurchased;
	params.PromptVisitCustomizationChest = PromptVisitCustomizationChest;

	UObject::ProcessEvent(fn, &params);

	if (CategoryType != nullptr)
		*CategoryType = params.CategoryType;
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FOfferPurchasedEvent   Event                          (Parm)

void UBP_Prompt_CosmeticPurchased_C::OnOfferPurchased(const FAthena_FOfferPurchasedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased"));

	UBP_Prompt_CosmeticPurchased_C_OnOfferPurchased_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate"));

	UBP_Prompt_CosmeticPurchased_C_Evaluate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable"));

	UBP_Prompt_CosmeticPurchased_C_RegisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable"));

	UBP_Prompt_CosmeticPurchased_C_UnregisterOtherEvents_Implementable_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FOfferPurchasedEvent   Event                          (Parm)

void UBP_Prompt_CosmeticPurchased_C::OfferPurchasedEvent(const FAthena_FOfferPurchasedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent"));

	UBP_Prompt_CosmeticPurchased_C_OfferPurchasedEvent_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FAthena_FShopClosedEvent       Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::ShopClosedEvent(const FAthena_FShopClosedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent"));

	UBP_Prompt_CosmeticPurchased_C_ShopClosedEvent_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize"));

	UBP_Prompt_CosmeticPurchased_C_PostInitialize_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events
// (BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CosmeticPurchased_C::Unregister_HUD_Events()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events"));

	UBP_Prompt_CosmeticPurchased_C_Unregister_HUD_Events_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::OnEndPlay_HUD(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD"));

	UBP_Prompt_CosmeticPurchased_C_OnEndPlay_HUD_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FPlayerEntitlementUpdatedEvent Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::PlayerEntitlementUpdated(const FPlayerEntitlementUpdatedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated"));

	UBP_Prompt_CosmeticPurchased_C_PlayerEntitlementUpdated_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CosmeticPurchased_C::ExecuteUbergraph_BP_Prompt_CosmeticPurchased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased"));

	UBP_Prompt_CosmeticPurchased_C_ExecuteUbergraph_BP_Prompt_CosmeticPurchased_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
