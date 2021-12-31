#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FogVolume_Undersea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.UserConstructionScript
struct ABP_FogVolume_Undersea_C_UserConstructionScript_Params
{
};

// Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ReceiveTick
struct ABP_FogVolume_Undersea_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ExecuteUbergraph_BP_FogVolume_Undersea
struct ABP_FogVolume_Undersea_C_ExecuteUbergraph_BP_FogVolume_Undersea_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
