#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissarySunk_MA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissarySunk_MA.BP_PromptActor_EmissarySunk_MA_C.UserConstructionScript
struct ABP_PromptActor_EmissarySunk_MA_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_EmissarySunk_MA.BP_PromptActor_EmissarySunk_MA_C.ReceiveBeginPlay
struct ABP_PromptActor_EmissarySunk_MA_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_EmissarySunk_MA.BP_PromptActor_EmissarySunk_MA_C.ReceiveEndPlay
struct ABP_PromptActor_EmissarySunk_MA_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_EmissarySunk_MA.BP_PromptActor_EmissarySunk_MA_C.ExecuteUbergraph_BP_PromptActor_EmissarySunk_MA
struct ABP_PromptActor_EmissarySunk_MA_C_ExecuteUbergraph_BP_PromptActor_EmissarySunk_MA_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
