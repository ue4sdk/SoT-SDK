#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_ProposeVoyage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.PostInitialize
struct UBP_Prompt_ProposeVoyage_C_PostInitialize_Params
{
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Prompt_OfferPurchased
struct UBP_Prompt_ProposeVoyage_C_Prompt_OfferPurchased_Params
{
	FAthena_FOfferPurchasedEvent                       Ev;                                                       // (Parm)
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_ProposeVoyage_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.Evaluate
struct UBP_Prompt_ProposeVoyage_C_Evaluate_Params
{
};

// Function BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C.ExecuteUbergraph_BP_Prompt_ProposeVoyage
struct UBP_Prompt_ProposeVoyage_C_ExecuteUbergraph_BP_Prompt_ProposeVoyage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
