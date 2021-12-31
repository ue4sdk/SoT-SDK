#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitCompanyShop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.HasAlreadyVisitedCompanyShop
struct UBP_Prompt_VisitCompanyShop_C_HasAlreadyVisitedCompanyShop_Params
{
	bool                                               HasVistedCompanyShop;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.SetCompanyPromptInfo
struct UBP_Prompt_VisitCompanyShop_C_SetCompanyPromptInfo_Params
{
	UClass*                                            Company;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            AccessKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FPrioritisedPromptWithHandle                       Prompt;                                                   // (Parm)
	UClass*                                            CompanyRankDesc;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.OnTreasureChestSold
struct UBP_Prompt_VisitCompanyShop_C_OnTreasureChestSold_Params
{
	FTreasureChestSoldClientPredictionEvent            Event;                                                    // (Parm)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.Evaluate
struct UBP_Prompt_VisitCompanyShop_C_Evaluate_Params
{
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_VisitCompanyShop_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_VisitCompanyShop_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.TreasureChestSoldPredictedEvent
struct UBP_Prompt_VisitCompanyShop_C_TreasureChestSoldPredictedEvent_Params
{
	FTreasureChestSoldClientPredictionEvent            Event;                                                    // (Parm)
};

// Function BP_Prompt_VisitCompanyShop.BP_Prompt_VisitCompanyShop_C.ExecuteUbergraph_BP_Prompt_VisitCompanyShop
struct UBP_Prompt_VisitCompanyShop_C_ExecuteUbergraph_BP_Prompt_VisitCompanyShop_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
