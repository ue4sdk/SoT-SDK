#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_VisitSeapost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.OnEventObjectWielded
struct UBP_Prompt_VisitSeapost_C_OnEventObjectWielded_Params
{
	FAthena_FEventObjectWielded                        Event;                                                    // (Parm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.Evaluate
struct UBP_Prompt_VisitSeapost_C_Evaluate_Params
{
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.EventObjectWielded
struct UBP_Prompt_VisitSeapost_C_EventObjectWielded_Params
{
	FAthena_FEventObjectWielded                        Event;                                                    // (Parm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_VisitSeapost_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_VisitSeapost_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_VisitSeapost.BP_Prompt_VisitSeapost_C.ExecuteUbergraph_BP_Prompt_VisitSeapost
struct UBP_Prompt_VisitSeapost_C_ExecuteUbergraph_BP_Prompt_VisitSeapost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
