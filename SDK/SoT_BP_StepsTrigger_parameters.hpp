#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StepsTrigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript
struct ABP_StepsTrigger_C_UserConstructionScript_Params
{
};

// Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay
struct ABP_StepsTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger
struct ABP_StepsTrigger_C_ExecuteUbergraph_BP_StepsTrigger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
