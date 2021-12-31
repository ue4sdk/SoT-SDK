#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredAIShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip
struct UBP_Prompt_EmissaryEncounteredAIShip_C_OnEmissaryEncounteredAIShip_Params
{
	FEmissaryEncounteredAIShipEvent                    NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip
struct UBP_Prompt_EmissaryEncounteredAIShip_C_EmissaryEncounteredAIShip_Params
{
	FEmissaryEncounteredAIShipEvent                    NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate
struct UBP_Prompt_EmissaryEncounteredAIShip_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryEncounteredAIShip_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryEncounteredAIShip_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip
struct UBP_Prompt_EmissaryEncounteredAIShip_C_ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
