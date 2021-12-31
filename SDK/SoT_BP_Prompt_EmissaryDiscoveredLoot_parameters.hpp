#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryDiscoveredLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.OnEmissaryDiscoveredLoot
struct UBP_Prompt_EmissaryDiscoveredLoot_C_OnEmissaryDiscoveredLoot_Params
{
	FEmissaryDiscoveredLootNetworkEvent                NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.EmissaryDiscoveredLoot
struct UBP_Prompt_EmissaryDiscoveredLoot_C_EmissaryDiscoveredLoot_Params
{
	FEmissaryDiscoveredLootNetworkEvent                NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.Evaluate
struct UBP_Prompt_EmissaryDiscoveredLoot_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryDiscoveredLoot_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryDiscoveredLoot_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredLoot
struct UBP_Prompt_EmissaryDiscoveredLoot_C_ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredLoot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
