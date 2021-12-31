#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryActivated_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc
struct UBP_Prompt_EmissaryActivated_C_OnEmissaryActivatedFunc_Params
{
	FEmissaryLevel_FEmissaryActivated                  NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated
struct UBP_Prompt_EmissaryActivated_C_EmissaryActivated_Params
{
	FEmissaryLevel_FEmissaryActivated                  NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate
struct UBP_Prompt_EmissaryActivated_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryActivated_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryActivated_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated
struct UBP_Prompt_EmissaryActivated_C_ExecuteUbergraph_BP_Prompt_EmissaryActivated_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
