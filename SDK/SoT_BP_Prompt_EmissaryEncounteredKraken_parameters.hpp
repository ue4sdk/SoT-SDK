#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredKraken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken
struct UBP_Prompt_EmissaryEncounteredKraken_C_OnEmissaryEncounteredKraken_Params
{
	FEmissaryEncounteredKrakenEvent                    NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken
struct UBP_Prompt_EmissaryEncounteredKraken_C_EmissaryEncounteredKraken_Params
{
	FEmissaryEncounteredKrakenEvent                    NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate
struct UBP_Prompt_EmissaryEncounteredKraken_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryEncounteredKraken_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryEncounteredKraken_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken
struct UBP_Prompt_EmissaryEncounteredKraken_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
