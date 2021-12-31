#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_VisitSeapost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PromptActor_VisitSeapost.BP_PromptActor_VisitSeapost_C.UserConstructionScript
struct ABP_PromptActor_VisitSeapost_C_UserConstructionScript_Params
{
};

// Function BP_PromptActor_VisitSeapost.BP_PromptActor_VisitSeapost_C.ReceiveBeginPlay
struct ABP_PromptActor_VisitSeapost_C_ReceiveBeginPlay_Params
{
};

// Function BP_PromptActor_VisitSeapost.BP_PromptActor_VisitSeapost_C.ReceiveEndPlay
struct ABP_PromptActor_VisitSeapost_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PromptActor_VisitSeapost.BP_PromptActor_VisitSeapost_C.ExecuteUbergraph_BP_PromptActor_VisitSeapost
struct ABP_PromptActor_VisitSeapost_C_ExecuteUbergraph_BP_PromptActor_VisitSeapost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
