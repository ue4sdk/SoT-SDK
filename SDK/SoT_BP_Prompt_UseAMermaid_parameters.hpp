#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_UseAMermaid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ResetState
struct UBP_Prompt_UseAMermaid_C_ResetState_Params
{
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.EvaluatePromptDisplayState
struct UBP_Prompt_UseAMermaid_C_EvaluatePromptDisplayState_Params
{
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.PostInitialize
struct UBP_Prompt_UseAMermaid_C_PostInitialize_Params
{
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidActivatedLocally
struct UBP_Prompt_UseAMermaid_C_Prompt_MermaidActivatedLocally_Params
{
	FMermaidActivatedLocally                           Ev;                                                       // (Parm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidDeactivatedLocally
struct UBP_Prompt_UseAMermaid_C_Prompt_MermaidDeactivatedLocally_Params
{
	FMermaidDeactivatedLocally                         Ev;                                                       // (Parm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.Prompt_MermaidUsed
struct UBP_Prompt_UseAMermaid_C_Prompt_MermaidUsed_Params
{
	FMermaidUsedEvent                                  Ev;                                                       // (Parm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.UnregisterOtherEvents_Implementable
struct UBP_Prompt_UseAMermaid_C_UnregisterOtherEvents_Implementable_Params
{
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_UseAMermaid_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C.ExecuteUbergraph_BP_Prompt_UseAMermaid
struct UBP_Prompt_UseAMermaid_C_ExecuteUbergraph_BP_Prompt_UseAMermaid_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
