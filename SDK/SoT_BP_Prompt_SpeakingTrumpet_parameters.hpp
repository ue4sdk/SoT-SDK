#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_SpeakingTrumpet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldFunc
struct UBP_Prompt_SpeakingTrumpet_C_OnWieldFunc_Params
{
	FAthena_FEventObjectWielded                        EventObjectWielded;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_SpeakingTrumpet_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_SpeakingTrumpet_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.Evaluate
struct UBP_Prompt_SpeakingTrumpet_C_Evaluate_Params
{
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.OnWieldEvent
struct UBP_Prompt_SpeakingTrumpet_C_OnWieldEvent_Params
{
	FAthena_FEventObjectWielded                        OnWieldEvent;                                             // (Parm)
};

// Function BP_Prompt_SpeakingTrumpet.BP_Prompt_SpeakingTrumpet_C.ExecuteUbergraph_BP_Prompt_SpeakingTrumpet
struct UBP_Prompt_SpeakingTrumpet_C_ExecuteUbergraph_BP_Prompt_SpeakingTrumpet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
