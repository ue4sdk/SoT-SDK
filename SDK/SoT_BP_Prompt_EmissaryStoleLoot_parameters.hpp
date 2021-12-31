#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryStoleLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot
struct UBP_Prompt_EmissaryStoleLoot_C_OnEmissaryStoleLoot_Params
{
	FEmissaryStoleLootNetworkEvent                     NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot
struct UBP_Prompt_EmissaryStoleLoot_C_EmissaryStoleLoot_Params
{
	FEmissaryStoleLootNetworkEvent                     NewParam;                                                 // (Parm)
};

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate
struct UBP_Prompt_EmissaryStoleLoot_C_Evaluate_Params
{
};

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryStoleLoot_C_RegisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_EmissaryStoleLoot_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot
struct UBP_Prompt_EmissaryStoleLoot_C_ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
