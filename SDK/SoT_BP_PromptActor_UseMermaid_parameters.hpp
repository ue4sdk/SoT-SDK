#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_UseMermaid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_UseMermaid.BP_PromptActor_UseMermaid_C.UserConstructionScript
struct ABP_PromptActor_UseMermaid_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_UseMermaid.BP_PromptActor_UseMermaid_C.ReceiveBeginPlay
struct ABP_PromptActor_UseMermaid_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_UseMermaid.BP_PromptActor_UseMermaid_C.ReceiveEndPlay
struct ABP_PromptActor_UseMermaid_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_UseMermaid.BP_PromptActor_UseMermaid_C.ExecuteUbergraph_BP_PromptActor_UseMermaid
struct ABP_PromptActor_UseMermaid_C_ExecuteUbergraph_BP_PromptActor_UseMermaid_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
