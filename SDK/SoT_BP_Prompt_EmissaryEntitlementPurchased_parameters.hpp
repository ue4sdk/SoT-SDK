#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEntitlementPurchased_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.OnEmissaryEntitlementPurchasedFunc
struct UBP_Prompt_EmissaryEntitlementPurchased_C_OnEmissaryEntitlementPurchasedFunc_Params
{
	FEmissaryEntitlementPurchasedEvent                 NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.EmissaryEntitlementPurchased
struct UBP_Prompt_EmissaryEntitlementPurchased_C_EmissaryEntitlementPurchased_Params
{
	FEmissaryEntitlementPurchasedEvent                 NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.Evaluate
struct UBP_Prompt_EmissaryEntitlementPurchased_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryEntitlementPurchased_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryEntitlementPurchased_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C.ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased
struct UBP_Prompt_EmissaryEntitlementPurchased_C_ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
