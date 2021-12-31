#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActorBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializePrompt
struct ABP_PromptActorBase_C_UninitializePrompt_Params
{
	UBP_PromptCoordinator_Base_C*                      PromptCoordinator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.UninitializeAllPrompts
struct ABP_PromptActorBase_C_UninitializeAllPrompts_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.CheckAllPromptsComplete
struct ABP_PromptActorBase_C_CheckAllPromptsComplete_Params
{
	bool                                               AllCompleted;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.Complete
struct ABP_PromptActorBase_C_Complete_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.GetMyClass
struct ABP_PromptActorBase_C_GetMyClass_Params
{
	UClass*                                            Class;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.GetAthenaPlayerController
struct ABP_PromptActorBase_C_GetAthenaPlayerController_Params
{
	AAthenaPlayerController*                           AthenaPlayerController;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.UserConstructionScript
struct ABP_PromptActorBase_C_UserConstructionScript_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.Add Prompt Coordinator
struct ABP_PromptActorBase_C_Add_Prompt_Coordinator_Params
{
	UBP_PromptCoordinator_Base_C*                      Prompt_Coordinator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.On Prompt Complete
struct ABP_PromptActorBase_C_On_Prompt_Complete_Params
{
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.ReceiveEndPlay
struct ABP_PromptActorBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.ExecuteUbergraph_BP_PromptActorBase
struct ABP_PromptActorBase_C_ExecuteUbergraph_BP_PromptActorBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActorBase.BP_PromptActorBase_C.OnComplete__DelegateSignature
struct ABP_PromptActorBase_C_OnComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
