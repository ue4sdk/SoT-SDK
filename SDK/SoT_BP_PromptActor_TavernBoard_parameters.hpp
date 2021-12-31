#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_TavernBoard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.OnRep_TavernBoardLocations
struct ABP_PromptActor_TavernBoard_C_OnRep_TavernBoardLocations_Params
{
};

// Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.UserConstructionScript
struct ABP_PromptActor_TavernBoard_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ReceiveBeginPlay
struct ABP_PromptActor_TavernBoard_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ReceiveEndPlay
struct ABP_PromptActor_TavernBoard_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_TavernBoard.BP_PromptActor_TavernBoard_C.ExecuteUbergraph_BP_PromptActor_TavernBoard
struct ABP_PromptActor_TavernBoard_C_ExecuteUbergraph_BP_PromptActor_TavernBoard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
