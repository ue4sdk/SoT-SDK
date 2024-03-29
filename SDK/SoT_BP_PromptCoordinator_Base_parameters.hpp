#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.IsCharacterInsideRadius
struct UBP_PromptCoordinator_Base_C_IsCharacterInsideRadius_Params
{
	FVector                                            Center;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UninitializeImplementable
struct UBP_PromptCoordinator_Base_C_UninitializeImplementable_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetHUDObjectMessageDispatcher
struct UBP_PromptCoordinator_Base_C_GetHUDObjectMessageDispatcher_Params
{
	FObjectMessagingDispatcherHandle                   HUD_Dispatcher;                                           // (Parm, OutParm)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Complete
struct UBP_PromptCoordinator_Base_C_Complete_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.UnregisterHandles
struct UBP_PromptCoordinator_Base_C_UnregisterHandles_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.PostInitialize
struct UBP_PromptCoordinator_Base_C_PostInitialize_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.InitializeAndStart
struct UBP_PromptCoordinator_Base_C_InitializeAndStart_Params
{
	AAthenaPlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetCharacterObjectMessageDispatcher
struct UBP_PromptCoordinator_Base_C_GetCharacterObjectMessageDispatcher_Params
{
	FObjectMessagingDispatcherHandle                   Player_Dispatcher;                                        // (Parm, OutParm)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Evaluate
struct UBP_PromptCoordinator_Base_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.GetControllerObjectMessageDispatcher
struct UBP_PromptCoordinator_Base_C_GetControllerObjectMessageDispatcher_Params
{
	FObjectMessagingDispatcherHandle                   Player_Dispatcher;                                        // (Parm, OutParm)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.Start
struct UBP_PromptCoordinator_Base_C_Start_Params
{
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.ExecuteUbergraph_BP_PromptCoordinator_Base
struct UBP_PromptCoordinator_Base_C_ExecuteUbergraph_BP_PromptCoordinator_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C.OnComplete__DelegateSignature
struct UBP_PromptCoordinator_Base_C_OnComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
