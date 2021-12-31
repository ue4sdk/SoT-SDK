#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptCoordinator_DiceEmote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc
struct UBP_PromptCoordinator_DiceEmote_C_OnEmoteStartedFunc_Params
{
	FEventEmoteStarted                                 EventEmoteStarted;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_DiceEmote_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable
struct UBP_PromptCoordinator_DiceEmote_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate
struct UBP_PromptCoordinator_DiceEmote_C_Evaluate_Params
{
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted
struct UBP_PromptCoordinator_DiceEmote_C_OnEmoteStarted_Params
{
	FEventEmoteStarted                                 EmoteStartedEvent;                                        // (Parm)
};

// Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote
struct UBP_PromptCoordinator_DiceEmote_C_ExecuteUbergraph_BP_PromptCoordinator_DiceEmote_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
