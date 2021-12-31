#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_QuickStorageTransfer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.IsStorageContainer
struct UBP_Prompt_QuickStorageTransfer_C_IsStorageContainer_Params
{
	TScriptInterface<class UWieldableInterface>        Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.GetShowPrompt
struct UBP_Prompt_QuickStorageTransfer_C_GetShowPrompt_Params
{
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.EvaluatePromptDisplayState
struct UBP_Prompt_QuickStorageTransfer_C_EvaluatePromptDisplayState_Params
{
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_QuickStorageTransfer_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_QuickStorageTransfer_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.OnObjectWielded
struct UBP_Prompt_QuickStorageTransfer_C_OnObjectWielded_Params
{
	FAthena_FEventObjectWielded                        Event;                                                    // (Parm)
};

// Function BP_Prompt_QuickStorageTransfer.BP_Prompt_QuickStorageTransfer_C.ExecuteUbergraph_BP_Prompt_QuickStorageTransfer
struct UBP_Prompt_QuickStorageTransfer_C_ExecuteUbergraph_BP_Prompt_QuickStorageTransfer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
