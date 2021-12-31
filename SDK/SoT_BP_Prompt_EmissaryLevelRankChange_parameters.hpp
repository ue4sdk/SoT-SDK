#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryLevelRankChange_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange
struct UBP_Prompt_EmissaryLevelRankChange_C_OnEmissaryLevelRankChange_Params
{
	FEmissaryLevel_FEmissaryLevelRankChange            NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange
struct UBP_Prompt_EmissaryLevelRankChange_C_EmissaryLevelRankChange_Params
{
	FEmissaryLevel_FEmissaryLevelRankChange            NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate
struct UBP_Prompt_EmissaryLevelRankChange_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryLevelRankChange_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryLevelRankChange_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange
struct UBP_Prompt_EmissaryLevelRankChange_C_ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
