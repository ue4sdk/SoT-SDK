#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CT_VoyageProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPurchaseable
struct UBP_CT_VoyageProgress_C_IsPurchaseable_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.SetProgress
struct UBP_CT_VoyageProgress_C_SetProgress_Params
{
	TEnumAsByte<ETutorialVoyageInternalState>          NewProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsCurrently
struct UBP_CT_VoyageProgress_C_IsCurrently_Params
{
	TEnumAsByte<ETutorialVoyageInternalState>          ProgressState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.IsPast
struct UBP_CT_VoyageProgress_C_IsPast_Params
{
	TEnumAsByte<ETutorialVoyageInternalState>          ProgressState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.PopulateExistingState
struct UBP_CT_VoyageProgress_C_PopulateExistingState_Params
{
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.Initialise
struct UBP_CT_VoyageProgress_C_Initialise_Params
{
	bool                                               Disabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CT_VoyageProgress.BP_CT_VoyageProgress_C.ExecuteUbergraph_BP_CT_VoyageProgress
struct UBP_CT_VoyageProgress_C_ExecuteUbergraph_BP_CT_VoyageProgress_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
