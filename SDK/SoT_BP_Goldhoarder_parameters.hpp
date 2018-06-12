#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Goldhoarder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Goldhoarder.BP_Goldhoarder_C.UserConstructionScript
struct ABP_Goldhoarder_C_UserConstructionScript_Params
{
};

// Function BP_Goldhoarder.BP_Goldhoarder_C.ReceiveBeginPlay
struct ABP_Goldhoarder_C_ReceiveBeginPlay_Params
{
};

// Function BP_Goldhoarder.BP_Goldhoarder_C.ReceiveTick
struct ABP_Goldhoarder_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Goldhoarder.BP_Goldhoarder_C.ExecuteUbergraph_BP_Goldhoarder
struct ABP_Goldhoarder_C_ExecuteUbergraph_BP_Goldhoarder_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
