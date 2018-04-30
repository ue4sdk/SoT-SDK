#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Storm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Storm.BP_Storm_C.UserConstructionScript
struct ABP_Storm_C_UserConstructionScript_Params
{
};

// Function BP_Storm.BP_Storm_C.ReceiveBeginPlay
struct ABP_Storm_C_ReceiveBeginPlay_Params
{
};

// Function BP_Storm.BP_Storm_C.ReceiveTick
struct ABP_Storm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Storm.BP_Storm_C.ExecuteUbergraph_BP_Storm
struct ABP_Storm_C_ExecuteUbergraph_BP_Storm_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
