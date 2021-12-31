#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CosmeticPurchased_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnPlayerEntitlementUpdated
struct UBP_Prompt_CosmeticPurchased_C_OnPlayerEntitlementUpdated_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.SetCosmeticPromptInfo
struct UBP_Prompt_CosmeticPurchased_C_SetCosmeticPromptInfo_Params
{
	UClass*                                            AccessKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<UClass*>                                    CategoryType;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FPrioritisedPromptWithHandle                       PromptCosmeticPurchased;                                  // (Parm)
	FPrioritisedPromptWithHandle                       PromptVisitCustomizationChest;                            // (Parm)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnOfferPurchased
struct UBP_Prompt_CosmeticPurchased_C_OnOfferPurchased_Params
{
	FAthena_FOfferPurchasedEvent                       Event;                                                    // (Parm)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Evaluate
struct UBP_Prompt_CosmeticPurchased_C_Evaluate_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_CosmeticPurchased_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_CosmeticPurchased_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OfferPurchasedEvent
struct UBP_Prompt_CosmeticPurchased_C_OfferPurchasedEvent_Params
{
	FAthena_FOfferPurchasedEvent                       Event;                                                    // (Parm)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ShopClosedEvent
struct UBP_Prompt_CosmeticPurchased_C_ShopClosedEvent_Params
{
	FAthena_FShopClosedEvent                           Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PostInitialize
struct UBP_Prompt_CosmeticPurchased_C_PostInitialize_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.Unregister HUD Events
struct UBP_Prompt_CosmeticPurchased_C_Unregister_HUD_Events_Params
{
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.OnEndPlay_HUD
struct UBP_Prompt_CosmeticPurchased_C_OnEndPlay_HUD_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.PlayerEntitlementUpdated
struct UBP_Prompt_CosmeticPurchased_C_PlayerEntitlementUpdated_Params
{
	FPlayerEntitlementUpdatedEvent                     Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_CosmeticPurchased.BP_Prompt_CosmeticPurchased_C.ExecuteUbergraph_BP_Prompt_CosmeticPurchased
struct UBP_Prompt_CosmeticPurchased_C_ExecuteUbergraph_BP_Prompt_CosmeticPurchased_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
