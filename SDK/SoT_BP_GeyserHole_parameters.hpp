#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GeyserHole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters
struct ABP_GeyserHole_C_SetFadeOutParameters_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters
struct ABP_GeyserHole_C_SetFadeInParameters_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript
struct ABP_GeyserHole_C_UserConstructionScript_Params
{
};

// Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay
struct ABP_GeyserHole_C_ReceiveBeginPlay_Params
{
};

// Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged
struct ABP_GeyserHole_C_OnStateChanged_Params
{
	TEnumAsByte<EHoleState>                            InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole
struct ABP_GeyserHole_C_ExecuteUbergraph_BP_GeyserHole_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
