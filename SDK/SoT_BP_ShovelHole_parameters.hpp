#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShovelHole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeInParameters
struct ABP_ShovelHole_C_SetFadeInParameters_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShovelHole.BP_ShovelHole_C.SetFadeOutParameters
struct ABP_ShovelHole_C_SetFadeOutParameters_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShovelHole.BP_ShovelHole_C.UserConstructionScript
struct ABP_ShovelHole_C_UserConstructionScript_Params
{
};

// Function BP_ShovelHole.BP_ShovelHole_C.OnStateChanged
struct ABP_ShovelHole_C_OnStateChanged_Params
{
	TEnumAsByte<EHoleState>                            InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShovelHole.BP_ShovelHole_C.ReceiveBeginPlay
struct ABP_ShovelHole_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShovelHole.BP_ShovelHole_C.ExecuteUbergraph_BP_ShovelHole
struct ABP_ShovelHole_C_ExecuteUbergraph_BP_ShovelHole_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
