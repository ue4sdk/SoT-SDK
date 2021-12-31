#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySunk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.OnEmissarySunk
struct UBP_Prompt_EmissarySunk_C_OnEmissarySunk_Params
{
	FEmissarySunkNetworkEvent                          NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.EmissarySunk
struct UBP_Prompt_EmissarySunk_C_EmissarySunk_Params
{
	FEmissarySunkNetworkEvent                          NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.Evaluate
struct UBP_Prompt_EmissarySunk_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissarySunk_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissarySunk_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.ExecuteUbergraph_BP_Prompt_EmissarySunk
struct UBP_Prompt_EmissarySunk_C_ExecuteUbergraph_BP_Prompt_EmissarySunk_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
