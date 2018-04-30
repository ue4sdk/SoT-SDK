#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_cooker_01_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_cooker_01_a.bp_cooker_01_a_C.UserConstructionScript
struct Abp_cooker_01_a_C_UserConstructionScript_Params
{
};

// Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveBeginPlay
struct Abp_cooker_01_a_C_ReceiveBeginPlay_Params
{
};

// Function bp_cooker_01_a.bp_cooker_01_a_C.ReceiveTick
struct Abp_cooker_01_a_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_cooker_01_a.bp_cooker_01_a_C.ExecuteUbergraph_bp_cooker_01_a
struct Abp_cooker_01_a_C_ExecuteUbergraph_bp_cooker_01_a_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
