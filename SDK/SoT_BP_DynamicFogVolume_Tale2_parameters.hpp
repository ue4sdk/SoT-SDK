#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicFogVolume_Tale2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.UserConstructionScript
struct ABP_DynamicFogVolume_Tale2_C_UserConstructionScript_Params
{
};

// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ReceiveTick
struct ABP_DynamicFogVolume_Tale2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ExecuteUbergraph_BP_DynamicFogVolume_Tale2
struct ABP_DynamicFogVolume_Tale2_C_ExecuteUbergraph_BP_DynamicFogVolume_Tale2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
