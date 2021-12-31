#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_TavernBoard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_TavernBoard_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_TavernBoard_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.Evaluate
struct UBP_Prompt_TavernBoard_C_Evaluate_Params
{
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.OnApproachedTavernBoard
struct UBP_Prompt_TavernBoard_C_OnApproachedTavernBoard_Params
{
	FApproachedPlayerGeneratedMapsContainer            Event;                                                    // (Parm)
};

// Function BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C.ExecuteUbergraph_BP_Prompt_TavernBoard
struct UBP_Prompt_TavernBoard_C_ExecuteUbergraph_BP_Prompt_TavernBoard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
