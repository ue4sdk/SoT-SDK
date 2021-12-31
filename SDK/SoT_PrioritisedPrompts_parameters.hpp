#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PrioritisedPrompts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt
struct UBasePromptCoordinator_UpdateVisiblePrompt_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable
struct UBasePromptCoordinator_UnregisterOtherEvents_Implementable_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable
struct UBasePromptCoordinator_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable
struct UBasePromptCoordinator_Uninitialize_Implementable_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize
struct UBasePromptCoordinator_Uninitialize_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.Start
struct UBasePromptCoordinator_Start_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs
struct UBasePromptCoordinator_SetPromptAs_Params
{
	FPrioritisedPromptWithHandle                       Prompt;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable
struct UBasePromptCoordinator_RegisterOtherEvents_Implementable_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable
struct UBasePromptCoordinator_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay
struct UBasePromptCoordinator_OnControllerEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable
struct UBasePromptCoordinator_MarkAsComplete_Implementable_Params
{
};

// Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt
struct UBasePromptCoordinator_MakeShowPrompt_Params
{
	FPrioritisedPromptWithHandle                       Prompt;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts
struct UBasePromptCoordinator_MakeHideCurrentPrompts_Params
{
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator
struct UBasePromptCoordinator_MakeCompleteCoordinator_Params
{
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.Initialize
struct UBasePromptCoordinator_Initialize_Params
{
	AAthenaPlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UPrioritisedPromptsManager*                        PrioritisedPromptsManager;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted
struct UBasePromptCoordinator_GetCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState
struct UBasePromptCoordinator_EvaluatePromptDisplayState_Params
{
	FPromptEvaluation                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts
struct UBasePromptCoordinator_DismissAllPrompts_Params
{
};

// Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService
struct UGetPromptsLocalService_GetPromptsLocalService_Params
{
	UObject*                                           WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UGetPromptsLocalService*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey
struct UPromptsLocalServiceInterface_IncrementCountForKey_Params
{
	UClass*                                            AccessKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey
struct UPromptsLocalServiceInterface_GetCountForKey_Params
{
	UClass*                                            AccessKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
